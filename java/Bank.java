import java.util.Random;


/**
 * @author willi
 * @version 1.0
 * @created 12-juin-2025 18:15:22
 */
public class Bank {

	private int bankId;
	private String bankName;
	private Random rand = new Random();

	public Bank(int bankid, String bankname){
		this.bankId = bankid;
        this.bankName = bankname;
	}

	public int getBankId() {
    return bankId;
	}

	public void setBankId(int bankId) {
		this.bankId = bankId;
	}

	public String getBankName() {
		return bankName;
	}

	public void setBankName(String bankName) {
		this.bankName = bankName;
	}

//C'est quoi ce finalize ?
	// public void finalize() throws Throwable {

	// }

	/**
	 * 
	 * @param clientId
	 * @param amount
	 */

    public boolean authorizePayment(int clientId, int amount) {
        // Generate a random boolean
        return rand.nextBoolean();
    }

}//end Bank