///////////////////////////////////////////////////////////
//  Order.h
//  Implementation of the Class Order
//  Created on:      12-juin-2025 18:14:40
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_FDF58FE0_93EF_4846_B728_5894C86830A5__INCLUDED_)
#define EA_FDF58FE0_93EF_4846_B728_5894C86830A5__INCLUDED_

#include "Client.h"
#include "OrderLine.h"
#include "Receipt.h"

/**
 * Test rigolo
 */
class Order
{

public:
	Order();
	virtual ~Order();

	void addOrderLine();
	int calculateOrderPrice();
	Client GetClient();
	Client getClient();
	OrderLine GetOrderLine();
	OrderLine getOrderLine();
	Receipt GetReceipt();
	Receipt getReceipt();
	void pay();
	void removeOrderLine();
	void SetClient(Client newVal);
	void setClient(Client newVal);
	void SetOrderLine(OrderLine newVal);
	void setOrderLine(OrderLine newVal);
	void SetReceipt(Receipt newVal);
	void setReceipt(Receipt newVal);

private:
	String creditCardNumber;
	bool isPaid;
	int orderId;
	Client *m_Client;
	OrderLine *m_OrderLine;
	Receipt *m_Receipt;

};
#endif // !defined(EA_FDF58FE0_93EF_4846_B728_5894C86830A5__INCLUDED_)
