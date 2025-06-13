#include "Order.h"
#include "Bank.h" // Inclure Bank pour accéder à ses membres
Order::Order(Client* client) : client(client), isPaid(false) {}

Order::~Order() {
    for (auto orderLine : orderLines) {
        delete orderLine; // Clean up dynamically allocated OrderLine objects
    }
}

void Order::addOrderLine(OrderLine* orderLine) {
    orderLines.push_back(orderLine);
}

void Order::validateOrder() {
    for (auto orderLine : orderLines) {
        Product* product = orderLine->getProduct();
        if (product != nullptr && product->getStock() >= orderLine->getQuantity()) {
            product->decreaseStock(orderLine->getQuantity());
        } else {
            throw std::runtime_error("Insufficient stock for product: " + product->getName());
        }
    }
}

Receipt* Order::pay() {
    if (!isPaid) {
        int totalPrice = calculateTotalPrice();
        if (client->getBank()->authorizePayment(client->getCreditCard()->getClient()->getClientId(), totalPrice)) {
            isPaid = true;
            return new Receipt(client, totalPrice); // Generate receipt
        }
    }
    return nullptr;
}

int Order::calculateTotalPrice() const {
    int total = 0;
    for (const auto& orderLine : orderLines) {
        total += orderLine->calculateOrderLinePrice();
    }
    return total;
}