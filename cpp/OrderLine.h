///////////////////////////////////////////////////////////
//  OrderLine.h
//  Implementation of the Class OrderLine
//  Created on:      12-juin-2025 18:14:56
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_AA12A88F_2288_45a5_9194_0985A319C156__INCLUDED_)
#define EA_AA12A88F_2288_45a5_9194_0985A319C156__INCLUDED_

#include "Product.h"

class OrderLine
{

public:
	OrderLine();
	virtual ~OrderLine();

	int calculateOrderLinePrice();
	Product GetProduct();
	Product getProduct();
	void SetProduct(Product newVal);
	void setProduct(Product newVal);

private:
	int orderId;
	int quantity;
	Product *m_Product;

};
#endif // !defined(EA_AA12A88F_2288_45a5_9194_0985A319C156__INCLUDED_)
