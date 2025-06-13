

/**
 * @author willi
 * @version 1.0
 * @created 12-juin-2025 18:15:31
 */
public class CreditCard {

	private int credit;
	private Client m_Client;

	public CreditCard(int creditAmount, Client client){
		this.credit = creditAmount;
		this.m_Client = client;

	}

	// public void finalize() throws Throwable {

	// }

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

	public int getCredit(){
		return credit;
	}

	public boolean updateCredit(int debOrCred){
		if(credit + debOrCred < 0){
			System.out.println("Le montant du compte est insuffisant pour effectuer cette action");
			return false;
		}
		credit += debOrCred;
		return true;
	}

}//end CreditCard