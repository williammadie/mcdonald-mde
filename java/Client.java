/**
 * @author willi
 * @version 1.0
 * @created 12-juin-2025 18:15:27
 */
public class Client {

	private int clientId;
	private String firstName;
	private String lastName;
	private Bank m_Bank;

	public Client(int id, String fName, String lName, Bank bank) {
        this.clientId = id;
        this.firstName = fName;
		this.lastName = lName;
		this.m_Bank = bank;
    }

	public int getClientId() {
        return clientId;
    }

    public String getName() {
        return firstName + ' ' + lastName;
    }

	public String getFirstName() {
        return firstName;
    }

	public String getLastName() {
        return lastName;
    }

	// public void finalize() throws Throwable {

	// }
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

	public void setFirstName(String firstN) {
        this.firstName = firstN;
    }

	public void setLastName(String lastN) {
        this.lastName = lastN;
    }

	public void setClientId(int clientId) {
        this.clientId = clientId;
    }

}//end Client