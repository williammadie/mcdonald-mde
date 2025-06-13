#include "CreditCard.h"

CreditCard::CreditCard(const std::string& cardNumber, int creditLimit, Client* client)
    : cardNumber(cardNumber), creditLimit(creditLimit), client(client) {}

CreditCard::~CreditCard() {}

std::string CreditCard::getCardNumber() const {
    return cardNumber;
}

int CreditCard::getCreditLimit() const {
    return creditLimit;
}

void CreditCard::setCreditLimit(int newLimit) {
    creditLimit = newLimit; // Met à jour la limite de crédit
}

Client* CreditCard::getClient() const {
    return client;
}