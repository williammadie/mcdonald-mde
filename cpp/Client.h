///////////////////////////////////////////////////////////
//  Client.h
//  Implementation of the Class Client
//  Created on:      12-juin-2025 18:14:32
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_E985686A_A0CC_44f4_83CF_0C7AC37B1FDA__INCLUDED_)
#define EA_E985686A_A0CC_44f4_83CF_0C7AC37B1FDA__INCLUDED_

#include "Bank.h"

class Client
{

public:
	Client();
	virtual ~Client();

	Bank GetBank();
	Bank getBank();
	void SetBank(Bank newVal);
	void setBank(Bank newVal);

private:
	int clientId;
	int firstName;
	int lastName;
	Bank *m_Bank;

};
#endif // !defined(EA_E985686A_A0CC_44f4_83CF_0C7AC37B1FDA__INCLUDED_)
