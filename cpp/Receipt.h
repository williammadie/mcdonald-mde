///////////////////////////////////////////////////////////
//  Receipt.h
//  Implementation of the Class Receipt
//  Created on:      12-juin-2025 18:15:04
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_83105DE5_8636_4bfa_BA51_81164054642B__INCLUDED_)
#define EA_83105DE5_8636_4bfa_BA51_81164054642B__INCLUDED_

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
#endif // !defined(EA_83105DE5_8636_4bfa_BA51_81164054642B__INCLUDED_)
