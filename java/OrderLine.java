
/**
 * @author willi
 * @version 1.0
 * @created 12-juin-2025 18:15:38
 */
public class OrderLine {

	private int orderId;
	private int quantity;
	private Product m_Product;

	public OrderLine(int orderid, Product product, int quantity){
		this.orderId = orderid;
		this.quantity = quantity;
		this.m_Product = product;
	}

	// public void finalize() throws Throwable {

	// }
	public int calculateOrderLinePrice(){
		return quantity*m_Product.getPrice();
	}

	public Product getProduct(){
		return m_Product;
	}

	/**
	 * 
	 * @param newVal
	 */
	public void setProduct(Product newVal){
		m_Product = newVal;
	}

	public int getOrderId() {
		return orderId;
	}

	public void setOrderId(int orderId) {
		this.orderId = orderId;
	}

	public int getQuantity() {
		return quantity;
	}

	public void setQuantity(int quantity) {
		this.quantity = quantity;
	}



}//end OrderLine