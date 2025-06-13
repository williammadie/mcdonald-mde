#include "Client.h"
#include "Bank.h" // Inclure Bank ici, car il est utilisé dans les méthodes
int Client::nextClientId = 1; // Initialisation de l'ID unique

Client::Client(const std::string& firstName, const std::string& lastName, Bank* bank)
    : firstName(firstName), lastName(lastName), bank(bank), creditCard(nullptr) {
    clientId = nextClientId++; // Assigne un ID unique
}

Client::~Client() {}

int Client::getClientId() const {
    return clientId;
}

CreditCard* Client::getCreditCard() const {
    return creditCard;
}

void Client::setCreditCard(CreditCard* creditCard) {
    this->creditCard = creditCard;
}

Bank* Client::getBank() const {
    return bank;
}