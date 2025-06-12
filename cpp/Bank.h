///////////////////////////////////////////////////////////
//  Bank.h
//  Implementation of the Class Bank
//  Created on:      12-juin-2025 18:14:28
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_7A97CDAB_F0F7_4616_98C1_4321A95AA337__INCLUDED_)
#define EA_7A97CDAB_F0F7_4616_98C1_4321A95AA337__INCLUDED_

class Bank
{

public:
	Bank();
	virtual ~Bank();

	bool auhtorizePayment(int clientId, int amount);

private:
	int bankId;

};
#endif // !defined(EA_7A97CDAB_F0F7_4616_98C1_4321A95AA337__INCLUDED_)
