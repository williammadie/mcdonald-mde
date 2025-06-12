package McDonald's;


/**
 * @author willi
 * @version 1.0
 * @created 12-juin-2025 17:10:54
 */
public class CreditCard {

	private int credit;
	private Client m_Client;

	public CreditCard(){

	}

	public void finalize() throws Throwable {

	}
	public Client getClient(){
		return m_Client;
	}

	/**
	 * 
	 * @param newVal
	 */
	public void setClient(Client newVal){
		m_Client = newVal;
	}
}//end CreditCard