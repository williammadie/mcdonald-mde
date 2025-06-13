#ifndef CLIENT_H
#define CLIENT_H

#include <string>
class Bank; // Déclaration anticipée de Bank

#include "CreditCard.h"

class Client {
public:
    Client(const std::string& firstName, const std::string& lastName, Bank* bank);
    virtual ~Client();

    int getClientId() const;
    CreditCard* getCreditCard() const;
    void setCreditCard(CreditCard* creditCard);

    Bank* getBank() const;

private:
    static int nextClientId; // Génère des IDs uniques
    int clientId;            // Identifiant unique du client
    std::string firstName;
    std::string lastName;
    CreditCard* creditCard;
    Bank* bank; // Pointeur vers Bank
};

#endif // CLIENT_H