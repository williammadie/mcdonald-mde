#include "Product.h"
#include <iostream>
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

void Product::decreaseStock(int amount) {
    if (amount > stock) {
        std::cout << name << " stock (" << stock << ") is less than requested decrease (" << amount << "). Restocking first." << std::endl;
        restockIfOutOfStock(50);
    }
    stock -= amount;
    std::cout << amount << " units removed from " << name << ". Stock is now " << stock << "." << std::endl;
    if (stock <= 0) {
        restockIfOutOfStock(05);
    }
}

void Product::restockIfOutOfStock(int restockAmount) {
    if (stock == 0) {
        stock = restockAmount;
        std::cout << name << " was out of stock and has been restocked to " 
                  << stock << " units." << std::endl;
    } else {
        std::cout << name << " is in stock (" << stock << " units)." << std::endl;
    }
}

void Product::increaseStock(int quantity) {
    stock += quantity;
}