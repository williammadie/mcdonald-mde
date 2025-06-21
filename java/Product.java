
/**
 * Product class
 * Author: willi
 * Version: 1.0
 * Created: 12-juin-2025
 */
public class Product {

	private String name;
	private int price;
	private int productId;
	private int stock;

	public Product(String name, int price, int productId, int stock) {
		this.name = name;
		this.price = price;
		this.productId = productId;
		this.stock = stock;
	}

	// Suppressed finalize method (optional in modern Java)
	// @Override
	// protected void finalize() throws Throwable {
	//     super.finalize();
	// }


	public String getName() {
		return name;
	}

	public int getPrice() {
		return price;
	}

	public int getProductId() {
		return productId;
	}

	public int getStock() {
		return stock;
	}

	/**
	 * Secure wrapper to decrease stock
	 * @param quantity number of items to remove
	 */
	public void decreaseStock(int quantity) {
		if (quantity <= 0) {
			System.out.println("Quantity must be positive.");
			return;
		}
		if (stock < quantity) {
			System.out.println("Insufficient stock to perform this action.");
			return;
		}
		stock -= quantity;
		autoReorder();
	}

	/**
	 * Checks stock and auto-reorders if too low
	 */
	private void autoReorder() {
		if (stock < 5) {
			System.out.println("Stock is low. Auto-reordering 20 items.");
			stock += 20;
		}
	}

	/**
	 * Increase the stock
	 * @param quantity number of items to add
	 */
	public void increaseStock(int quantity) {
		if (quantity > 0) {
			stock += quantity;
		}
	}

	/**
	 * Restocks by adding 50 items
	 */
	public void restock() {
		stock += 50;
	}


}
