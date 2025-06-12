///////////////////////////////////////////////////////////
//  Client.cpp
//  Implementation of the Class Client
//  Created on:      12-juin-2025 17:25:13
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


void Client::SetBank(Bank newVal){

	m_Bank = newVal;
}