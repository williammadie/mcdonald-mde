package McDonalds;


/**
 * Test rigolo
 * @author willi
 * @version 1.0
 * @created 12-juin-2025 18:15:34
 */
public class Order {

	private String creditCardNumber;
	private boolean isPaid;
	private int orderId;
	private Client m_Client;
	private OrderLine m_OrderLine;
	private Receipt m_Receipt;

	public Order(){

	}

	public void finalize() throws Throwable {

	}
	public void addOrderLine(){

	}

	public int calculateOrderPrice(){
		return 0;
	}

	public Client getClient(){
		return m_Client;
	}

	public Client getClient(){
		return m_Client;
	}

	public OrderLine getOrderLine(){
		return m_OrderLine;
	}

	public OrderLine getOrderLine(){
		return m_OrderLine;
	}

	public Receipt getReceipt(){
		return m_Receipt;
	}

	public Receipt getReceipt(){
		return m_Receipt;
	}

	public void pay(){

	}

	public void removeOrderLine(){

	}

	/**
	 * 
	 * @param newVal
	 */
	public void setClient(Client newVal){
		m_Client = newVal;
	}

	/**
	 * 
	 * @param newVal
	 */
	public void setClient(Client newVal){
		m_Client = newVal;
	}

	/**
	 * 
	 * @param newVal
	 */
	public void setOrderLine(OrderLine newVal){
		m_OrderLine = newVal;
	}

	/**
	 * 
	 * @param newVal
	 */
	public void setOrderLine(OrderLine newVal){
		m_OrderLine = newVal;
	}

	/**
	 * 
	 * @param newVal
	 */
	public void setReceipt(Receipt newVal){
		m_Receipt = newVal;
	}

	/**
	 * 
	 * @param newVal
	 */
	public void setReceipt(Receipt newVal){
		m_Receipt = newVal;
	}
}//end Order