package McDonalds;


/**
 * @author willi
 * @version 1.0
 * @created 12-juin-2025 18:15:38
 */
public class OrderLine {

	private int orderId;
	private int quantity;
	private Product m_Product;

	public OrderLine(){

	}

	public void finalize() throws Throwable {

	}
	public int calculateOrderLinePrice(){
		return 0;
	}

	public Product getProduct(){
		return m_Product;
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

	/**
	 * 
	 * @param newVal
	 */
	public void setProduct(Product newVal){
		m_Product = newVal;
	}
}//end OrderLine