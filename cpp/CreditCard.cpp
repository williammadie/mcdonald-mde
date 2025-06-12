///////////////////////////////////////////////////////////
//  CreditCard.cpp
//  Implementation of the Class CreditCard
//  Created on:      12-juin-2025 18:14:36
//  Original author: willi
///////////////////////////////////////////////////////////

#include "CreditCard.h"


CreditCard::CreditCard(){

}



CreditCard::~CreditCard(){

}





Client CreditCard::GetClient(){

	return m_Client;
}


Client CreditCard::getClient(){

	return m_Client;
}


void CreditCard::SetClient(Client newVal){

	m_Client = newVal;
}


void CreditCard::setClient(Client newVal){

	m_Client = newVal;
}