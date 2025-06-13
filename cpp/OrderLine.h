#ifndef ORDERLINE_H
#define ORDERLINE_H

#include "Product.h"

class OrderLine {
public:
    OrderLine(Product* product, int quantity);
    virtual ~OrderLine();

    Product* getProduct() const;
    void setProduct(Product* product);

    int getQuantity() const;
    void setQuantity(int quantity);

    int calculateOrderLinePrice() const;

private:
    Product* product; // Pointer to the associated Product
    int quantity;     // Quantity of the product
};

#endif // ORDERLINE_H