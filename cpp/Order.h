#ifndef ORDER_H
#define ORDER_H

#include <vector>
#include "OrderLine.h"
#include "Receipt.h"
#include "Client.h"

class Order {
public:
    Order(Client* client);
    virtual ~Order();

    void addOrderLine(OrderLine* orderLine);
    void validateOrder();
    Receipt* pay();

    int calculateTotalPrice() const;

private:
    Client* client;
    std::vector<OrderLine*> orderLines; // Store pointers to OrderLine objects
    bool isPaid;
};

#endif // ORDER_H