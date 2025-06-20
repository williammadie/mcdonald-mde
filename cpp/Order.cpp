#include "Order.h"
#include "Bank.h" // Inclure Bank pour accéder à ses membres
#include <stdexcept>
#include <random>   // <-- Cette ligne est indispensable
#include <algorithm>
#include <set> // Add this line for std::set
Order::Order(Client* client)
    : client(client), isPaid(false), orderId(generateUniqueOrderId()) {}

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
// In Order.cpp or Order class implementation
void Order::removeOrderLine(OrderLine* orderLine) {
    // Assuming you have a std::vector<OrderLine*> orderLines;
    auto it = std::find(orderLines.begin(), orderLines.end(), orderLine);
    if (it != orderLines.end()) {
        orderLines.erase(it);
    }
}
int Order::generateUniqueOrderId() {
    static std::set<int> usedIds;
    static std::random_device rd;
    static std::mt19937 gen(rd());
    static std::uniform_int_distribution<> dis(100000, 999999);

    int id;
    do {
        id = dis(gen);
    } while (usedIds.find(id) != usedIds.end());
    usedIds.insert(id);
    return id;
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