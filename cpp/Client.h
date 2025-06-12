///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      12-juin-2025 17:25:13
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_E5108110_F8EB_40dd_BDC1_F0B1441FB710__INCLUDED_)
#define EA_E5108110_F8EB_40dd_BDC1_F0B1441FB710__INCLUDED_

#include "Bank.h"

class Client
{

public:
	Client();
	virtual ~Client();

	Bank GetBank();
	void SetBank(Bank newVal);

private:
	int clientId;
	int firstName;
	int lastName;
	Bank *m_Bank;

};
#endif // !defined(EA_E5108110_F8EB_40dd_BDC1_F0B1441FB710__INCLUDED_)
