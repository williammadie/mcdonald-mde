#ifndef PRODUCT_H
#define PRODUCT_H

#include <string>

class Product {
public:
    Product(const std::string& name, int price, int stock);
    virtual ~Product();

    std::string getName() const;
    int getPrice() const;
    int getStock() const;

    void decreaseStock(int quantity);
    void increaseStock(int quantity);

private:
    std::string name;
    int price;
    int stock;
};

#endif // PRODUCT_H