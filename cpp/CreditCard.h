///////////////////////////////////////////////////////////
//  CreditCard.h
//  Implementation of the Class CreditCard
//  Created on:      12-juin-2025 18:14:36
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_0286E3A1_8C36_4d53_A859_CF5205FE0DF1__INCLUDED_)
#define EA_0286E3A1_8C36_4d53_A859_CF5205FE0DF1__INCLUDED_

#include "Client.h"

class CreditCard
{

public:
	CreditCard();
	virtual ~CreditCard();

	Client GetClient();
	Client getClient();
	void SetClient(Client newVal);
	void setClient(Client newVal);

private:
	int credit;
	Client *m_Client;

};
#endif // !defined(EA_0286E3A1_8C36_4d53_A859_CF5205FE0DF1__INCLUDED_)
