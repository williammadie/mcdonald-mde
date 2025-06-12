package McDonald's;


/**
 * @author willi
 * @version 1.0
 * @created 12-juin-2025 17:11:03
 */
public class OrderLine {

	private int orderId;
	private int quantity;
	private Product m_Product;

	public OrderLine(){

	}

	public void finalize() throws Throwable {

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
}//end OrderLine