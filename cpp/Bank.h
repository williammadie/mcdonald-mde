///////////////////////////////////////////////////////////
//  Bank.h
//  Implementation of the Class Bank
//  Created on:      12-juin-2025 17:25:03
//  Original author: willi
///////////////////////////////////////////////////////////

#if !defined(EA_3E8213C9_8ABF_484f_BBAB_3D8F7DF30E75__INCLUDED_)
#define EA_3E8213C9_8ABF_484f_BBAB_3D8F7DF30E75__INCLUDED_

class Bank
{

public:
	Bank();
	virtual ~Bank();

	bool auhtorizePayment(int clientId, int amount);

private:
	int bankId;

};
#endif // !defined(EA_3E8213C9_8ABF_484f_BBAB_3D8F7DF30E75__INCLUDED_)
