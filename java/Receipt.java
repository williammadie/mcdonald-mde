
/**
 * Receipt class
 * Author: willi
 * Version: 1.0
 * Created: 12-juin-2025 18:15:48
 */
public class Receipt {

	private String date;
	private int noClient;
	private int receiptId;
	private int totalAmount;

	public Receipt(String date, int noClient, int receiptId, int totalAmount) {
		this.date = date;
		this.noClient = noClient;
		this.receiptId = receiptId;
		this.totalAmount = totalAmount;
	}

	public String getDate() {
		return date;
	}

	public int getNoClient() {
		return noClient;
	}

	public int getReceiptId() {
		return receiptId;
	}

	public int getTotalAmount() {
		return totalAmount;
	}

	public void setDate(String date) {
		this.date = date;
	}

	public void setNoClient(int noClient) {
		this.noClient = noClient;
	}

	public void setReceiptId(int receiptId) {
		this.receiptId = receiptId;
	}

	public void setTotalAmount(int totalAmount) {
		this.totalAmount = totalAmount;
	}
}//end Receipt