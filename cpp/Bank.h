#ifndef BANK_H
#define BANK_H

#include <vector>
#include "Client.h"

class Bank {
public:
    Bank();
    virtual ~Bank();

    bool authorizePayment(int clientId, int amount);
    void addClient(const Client& client);
    std::vector<Client> getClients() const;

private:
    std::vector<Client> clients; // Liste des clients
};

#endif // BANK_H