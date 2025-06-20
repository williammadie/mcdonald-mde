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
    int orderId;
     static int generateUniqueOrderId();
    void addOrderLine(OrderLine* orderLine);
    void validateOrder();
    Receipt* pay();
    // In Order.h or Order class definition
    void removeOrderLine(OrderLine* orderLine);

    int calculateTotalPrice() const;

private:
    Client* client;
    std::vector<OrderLine*> orderLines; // Store pointers to OrderLine objects
    bool isPaid;

};

#endif // ORDER_H