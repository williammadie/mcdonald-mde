#include "OrderLine.h"

OrderLine::OrderLine(Product* product, int quantity)
    : product(product), quantity(quantity) {}

OrderLine::~OrderLine() {}

Product* OrderLine::getProduct() const {
    return product;
}

void OrderLine::setProduct(Product* product) {
    this->product = product;
}

int OrderLine::getQuantity() const {
    return quantity;
}

void OrderLine::setQuantity(int quantity) {
    this->quantity = quantity;
}

int OrderLine::calculateOrderLinePrice() const {
    if (product != nullptr) {
        return product->getPrice() * quantity;
    }
    return 0; // Return 0 if product is null
}