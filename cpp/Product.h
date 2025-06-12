///////////////////////////////////////////////////////////
//  Product.h
//  Implementation of the Class Product
//  Created on:      12-juin-2025 18:15:00
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_602A45DA_8958_4ef7_94C3_1E7320876AA9__INCLUDED_)
#define EA_602A45DA_8958_4ef7_94C3_1E7320876AA9__INCLUDED_

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
#endif // !defined(EA_602A45DA_8958_4ef7_94C3_1E7320876AA9__INCLUDED_)
