#include "Product.h"

Product::Product(const std::string& name, int price, int stock)
    : name(name), price(price), stock(stock) {}

Product::~Product() {}

std::string Product::getName() const {
    return name;
}

int Product::getPrice() const {
    return price;
}

int Product::getStock() const {
    return stock;
}

void Product::decreaseStock(int quantity) {
    if (quantity <= stock) {
        stock -= quantity;
    }
}

void Product::increaseStock(int quantity) {
    stock += quantity;
}