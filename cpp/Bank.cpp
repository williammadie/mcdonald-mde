#include "Bank.h"
#include "Client.h" // Inclure Client ici, car il est utilisé dans les méthodes
Bank::Bank() {}

Bank::~Bank() {}

bool Bank::authorizePayment(int clientId, int amount) {
    for (const auto& client : clients) {
        if (client.getClientId() == clientId) { // Vérifie si le client existe
            CreditCard* card = client.getCreditCard();
            if (card != nullptr && card->getCreditLimit() >= amount) {
                card->setCreditLimit(card->getCreditLimit() - amount); // Déduit le montant
                return true; // Paiement autorisé
            }
        }
    }
    return false; // Paiement non autorisé
}

void Bank::addClient(const Client& client) {
    clients.push_back(client); // Ajoute le client à la liste
}

std::vector<Client> Bank::getClients() const {
    return clients; // Retourne la liste des clients
}