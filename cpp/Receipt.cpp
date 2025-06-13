#include "Receipt.h"
#include <ctime>

Receipt::Receipt(Client* client, int totalAmount)
    : client(client), totalAmount(totalAmount) {
    // Generate current date
    time_t now = time(0);
    date = ctime(&now);
}

Receipt::~Receipt() {}

std::string Receipt::getDate() const {
    return date;
}

int Receipt::getTotalAmount() const {
    return totalAmount;
}