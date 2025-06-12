///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      12-juin-2025 18:14:32
//  Original author: willi
///////////////////////////////////////////////////////////

#include "Client.h"


Client::Client(){

}



Client::~Client(){

}





Bank Client::GetBank(){

	return m_Bank;
}


Bank Client::getBank(){

	return m_Bank;
}


void Client::SetBank(Bank newVal){

	m_Bank = newVal;
}


void Client::setBank(Bank newVal){

	m_Bank = newVal;
}