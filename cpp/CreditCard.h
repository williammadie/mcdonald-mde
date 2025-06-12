///////////////////////////////////////////////////////////
//  CreditCard.h
//  Implementation of the Class CreditCard
//  Created on:      12-juin-2025 17:25:28
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_CD0D5716_74B9_4c31_88B0_55FAB8111191__INCLUDED_)
#define EA_CD0D5716_74B9_4c31_88B0_55FAB8111191__INCLUDED_

#include "Client.h"

class CreditCard
{

public:
	CreditCard();
	virtual ~CreditCard();

	Client GetClient();
	void SetClient(Client newVal);

private:
	int credit;
	Client *m_Client;

};
#endif // !defined(EA_CD0D5716_74B9_4c31_88B0_55FAB8111191__INCLUDED_)
