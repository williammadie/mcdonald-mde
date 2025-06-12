///////////////////////////////////////////////////////////
//  Order.h
//  Implementation of the Class Order
//  Created on:      12-juin-2025 17:25:33
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_FCC15108_967F_43b5_9F76_58CA17A94350__INCLUDED_)
#define EA_FCC15108_967F_43b5_9F76_58CA17A94350__INCLUDED_

#include "Client.h"
#include "OrderLine.h"
#include "Receipt.h"

class Order
{

public:
	Order();
	virtual ~Order();

	void addOrderLine();
	Client GetClient();
	OrderLine GetOrderLine();
	Receipt GetReceipt();
	void pay();
	void removeOrderLine();
	void SetClient(Client newVal);
	void SetOrderLine(OrderLine newVal);
	void SetReceipt(Receipt newVal);

private:
	String creditCardNumber;
	int orderId;
	Client *m_Client;
	OrderLine *m_OrderLine;
	Receipt *m_Receipt;

};
#endif // !defined(EA_FCC15108_967F_43b5_9F76_58CA17A94350__INCLUDED_)
