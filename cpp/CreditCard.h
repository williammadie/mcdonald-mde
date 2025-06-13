#ifndef CREDITCARD_H
#define CREDITCARD_H

#include <string>

class Client;

class CreditCard {
public:
    CreditCard(const std::string& cardNumber, int creditLimit, Client* client);
    virtual ~CreditCard();

    std::string getCardNumber() const;
    int getCreditLimit() const;
    void setCreditLimit(int newLimit); // Ajout de la méthode setCreditLimit
    Client* getClient() const;

private:
    std::string cardNumber;
    int creditLimit;
    Client* client;
};

#endif // CREDITCARD_H