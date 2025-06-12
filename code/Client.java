package McDonald's;


/**
 * @author willi
 * @version 1.0
 * @created 12-juin-2025 17:10:43
 */
public class Client {

	private int clientId;
	private int firstName;
	private int lastName;
	private Bank m_Bank;

	public Client(){

	}

	public void finalize() throws Throwable {

	}
	public Bank getBank(){
		return m_Bank;
	}

	/**
	 * 
	 * @param newVal
	 */
	public void setBank(Bank newVal){
		m_Bank = newVal;
	}
}//end Client