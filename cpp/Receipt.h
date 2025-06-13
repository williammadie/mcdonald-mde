#ifndef RECEIPT_H
#define RECEIPT_H

#include <string>
#include "Client.h"

class Receipt {
public:
    Receipt(Client* client, int totalAmount);
    virtual ~Receipt();

    std::string getDate() const;
    int getTotalAmount() const;

private:
    std::string date;
    int totalAmount;
    Client* client;
};

#endif // RECEIPT_H