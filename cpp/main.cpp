#include <iostream>
#include "Client.h"
#include "Order.h"
#include "OrderLine.h"
#include "Product.h"
#include "Bank.h"

int main() {
    Bank bank;

    // Création du client
    std::cout << "Creating client..." << std::endl;
    Client client("John", "Doe", &bank);
    CreditCard card("1234-5678-9012-3456", 5000, &client);
    client.setCreditCard(&card);
    bank.addClient(client);
    std::cout << "Client created with ID: " << client.getClientId() << std::endl;

    // Création des produits
    std::cout << "Creating products..." << std::endl;
    Product burger("Burger", 5, 10);
    Product fries("Fries", 3, 20);
    std::cout << "Initial product stock: Burger = " << burger.getStock() << ", Fries = " << fries.getStock() << std::endl;

    // Création de la commande
    std::cout << "Starting order for client ID: " << client.getClientId() << std::endl;
    Order order(&client);

    // Ajout des produits à la commande
    std::cout << "Adding products to the order..." << std::endl;
    order.addOrderLine(new OrderLine(&burger, 2));
    std::cout << "Added 2 Burgers to the order." << std::endl;
    order.addOrderLine(new OrderLine(&fries, 1));
    std::cout << "Added 1 Fries to the order." << std::endl;

    try {
        // Validation de la commande
        std::cout << "Validating order..." << std::endl;
        order.validateOrder();
        std::cout << "Order validated successfully. Remaining stock: Burger = " << burger.getStock() << ", Fries = " << fries.getStock() << std::endl;

        // Paiement
        std::cout << "Calculating total order price..." << std::endl;
        int totalPrice = order.calculateTotalPrice();
        std::cout << "Total order price is: $" << totalPrice << std::endl;

        std::cout << "Processing payment..." << std::endl;
        Receipt* receipt = order.pay();

        if (receipt) {
            std::cout << "Payment authorized. Receipt generated." << std::endl;
            std::cout << "Receipt Date: " << receipt->getDate() << std::endl;
            std::cout << "Total Amount: $" << receipt->getTotalAmount() << std::endl;

            // Envoi de la commande à la cuisine
            std::cout << "Order sent to the kitchen!" << std::endl;
        } else {
            std::cout << "Payment failed!" << std::endl;
        }
    } catch (const std::exception& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}