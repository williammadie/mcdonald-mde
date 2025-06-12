///////////////////////////////////////////////////////////
//  Receipt.h
//  Implementation of the Class Receipt
//  Created on:      12-juin-2025 17:25:48
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_781E5F8D_935D_4c9c_B138_BDFE730689EB__INCLUDED_)
#define EA_781E5F8D_935D_4c9c_B138_BDFE730689EB__INCLUDED_

class Receipt
{

public:
	Receipt();
	virtual ~Receipt();

private:
	String date;
	int noClient;
	int receiptId;
	int totalAmount;

};
#endif // !defined(EA_781E5F8D_935D_4c9c_B138_BDFE730689EB__INCLUDED_)
