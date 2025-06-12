///////////////////////////////////////////////////////////
//  Product.h
//  Implementation of the Class Product
//  Created on:      12-juin-2025 17:25:44
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_64026AEE_55C1_4eb8_92AA_D1980C3AF04B__INCLUDED_)
#define EA_64026AEE_55C1_4eb8_92AA_D1980C3AF04B__INCLUDED_

class Product
{

public:
	Product();
	virtual ~Product();

	void decreaseStock(int quantity);
	void increaseStock(int quantity);
	void restock();

private:
	String name;
	int price;
	int productId;
	int stock;

};
#endif // !defined(EA_64026AEE_55C1_4eb8_92AA_D1980C3AF04B__INCLUDED_)
