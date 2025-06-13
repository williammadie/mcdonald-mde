import java.util.concurrent.atomic.AtomicInteger;
import java.util.Random;

public class Main {

    private static final AtomicInteger ORDER_ID_GENERATOR = new AtomicInteger(1000);
    private static final Random random = new Random();

    public static void main(String[] args) {
        System.out.println("===== McDonald's Order System =====\n");

        // --- Create bank ---
        Bank bank = new Bank(1, "Revolut");

        // --- Create products with random stock between 0 and 10 ---
        Product burger = new Product("Burger", 10, 1, random.nextInt(11));
        Product nugget = new Product("Nuggets", 2, 2, random.nextInt(11));
        Product soda = new Product("Soda", 3, 3, random.nextInt(11));

        // --- Display initial stock ---
        System.out.println("Initial Product Stock:");
        System.out.println(" - Burger: " + burger.getStock());
        System.out.println(" - Nuggets: " + nugget.getStock());
        System.out.println(" - Soda: " + soda.getStock());
        System.out.println();

        // --- Create client and order ---
        Client client = new Client(1, "Jean", "Dupont", bank);
        Order order = new Order();
        order.setClient(client);
        int orderId = ORDER_ID_GENERATOR.getAndIncrement();
        order.setOrderId(orderId);
        System.out.println("Client starts a new order with ID: " + order.getOrderId() + "\n");

        // --- Add products (up to 4 total) ---
        tryAddProductToOrder(order, burger);
        tryAddProductToOrder(order, nugget);
        tryAddProductToOrder(order, soda);

        // --- Remove nuggets from order ---
        System.out.println("\nRemoving Nuggets from order...");
        order.removeOrderLine(nugget);
        nugget.increaseStock(5); // Optional: replenish what was removed
        System.out.println("Nuggets removed from order.\n");

        // --- Ensure order is not empty ---
        if (order.getOrderLines().isEmpty()) {
            System.out.println("Order must contain at least one product.");
            return;
        }

        // --- Calculate price ---
        int totalPrice = order.calculateOrderPrice();
        System.out.println("Total order price: " + totalPrice + " euros\n");

        // --- Pay ---
        order.pay();
        if (!order.isPaid()) {
            System.out.println("Payment not authorized.");
            return;
        }
        System.out.println("Payment authorized!\n");

        // --- Generate receipt ---
        Receipt receipt = new Receipt("2025-06-13", client.getClientId(), 10000 + order.getOrderId(), totalPrice);
        order.setReceipt(receipt);
        System.out.println("Receipt:");
        System.out.println(" - Date:   " + receipt.getDate());
        System.out.println(" - Client: " + receipt.getNoClient());
        System.out.println(" - Total:  " + receipt.getTotalAmount() + " euros\n");

        // --- Send to kitchen ---
        System.out.println("Order sent to kitchen !");
    }

    private static void tryAddProductToOrder(Order order, Product product) {
        int quantity = 1 + random.nextInt(3); // 1 to 3 units
        System.out.println("Adding " + product.getName() + " (x" + quantity + ")...");

        if (product.getStock() >= quantity) {
            order.addOrderLine(new OrderLine(order.getOrderId(), product, quantity));
            product.decreaseStock(quantity);
            System.out.println(quantity + " x " + product.getName() + " added to order.");
        } else {
            System.out.println(product.getName() + " is out of stock or insufficient.");
        }
        System.out.println();
    }
}
