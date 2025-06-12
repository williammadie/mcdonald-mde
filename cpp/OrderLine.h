///////////////////////////////////////////////////////////
//  OrderLine.h
//  Implementation of the Class OrderLine
//  Created on:      12-juin-2025 17:25:39
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_94A371F1_FF1A_44b9_8219_E0E2CF3E5D45__INCLUDED_)
#define EA_94A371F1_FF1A_44b9_8219_E0E2CF3E5D45__INCLUDED_

#include "Product.h"

class OrderLine
{

public:
	OrderLine();
	virtual ~OrderLine();

	Product GetProduct();
	void SetProduct(Product newVal);

private:
	int orderId;
	int quantity;
	Product *m_Product;

};
#endif // !defined(EA_94A371F1_FF1A_44b9_8219_E0E2CF3E5D45__INCLUDED_)
