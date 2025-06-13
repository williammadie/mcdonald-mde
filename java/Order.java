import java.util.ArrayList;
import java.util.Iterator;
import java.util.List;

/**
 * Order class
 * Author: willi
 * Version: 1.0
 * Created: 12-juin-2025 18:15:34
 */
public class Order {

	private String creditCardNumber;
	private boolean isPaid;
	private int orderId;
	private Client m_Client;
	private Receipt m_Receipt;
	private List<OrderLine> orderLines;

	public Order() {
		this.orderLines = new ArrayList<>();
		this.isPaid = false;
	}

	/**
	 * Add an OrderLine to the list (up to 4 max)
	 */
	public void addOrderLine(OrderLine orderLine) {
		if (orderLines.size() < 4) {
			orderLines.add(orderLine);
		} else {
			System.out.println("Cannot add more than 4 products to the order.");
		}
	}

	/**
	 * Calculate total price of all order lines
	 */
	public int calculateOrderPrice() {
		int total = 0;
		for (OrderLine line : orderLines) {
			total += line.calculateOrderLinePrice();
		}
		return total;
	}

	/**
	 * Attempt to pay using the client's bank
	 */
	public void pay() {
		int amount = calculateOrderPrice();
		Bank clientBank = m_Client.getBank();
		boolean authorized = clientBank.authorizePayment(m_Client.getClientId(), amount);
		this.isPaid = authorized;

		if (authorized) {
			System.out.println("Order Class : Payment authorized.");
			// Optionally create receipt here
		} else {
			System.out.println("Order Class : Payment declined.");
		}
	}

	/**
	 * Remove an OrderLine by Product
	 */
	public void removeOrderLine(Product product) {
		Iterator<OrderLine> iterator = orderLines.iterator();
		while (iterator.hasNext()) {
			OrderLine line = iterator.next();
			if (line.getProduct().equals(product)) {
				iterator.remove();
				System.out.println("Order Class : Product removed from order.");
				return;
			}
		}
		System.out.println("Order Class : Product not found in order.");
	}

	public Client getClient() {
		return m_Client;
	}

	public void setClient(Client client) {
		this.m_Client = client;
	}

	public Receipt getReceipt() {
		return m_Receipt;
	}

	public void setReceipt(Receipt receipt) {
		this.m_Receipt = receipt;
	}

	public int getOrderId() {
		return orderId;
	}

	public void setOrderId(int orderId) {
		this.orderId = orderId;
	}

	public String getCreditCardNumber() {
		return creditCardNumber;
	}

	public void setCreditCardNumber(String creditCardNumber) {
		this.creditCardNumber = creditCardNumber;
	}

	public boolean isPaid() {
		return isPaid;
	}

	public List<OrderLine> getOrderLines() {
		return orderLines;
	}
}//end Order