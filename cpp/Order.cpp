///////////////////////////////////////////////////////////
//  Order.cpp
//  Implementation of the Class Order
//  Created on:      12-juin-2025 17:25:33
//  Original author: willi
///////////////////////////////////////////////////////////

#include "Order.h"


Order::Order(){

}



Order::~Order(){

}





void Order::addOrderLine(){

}


Client Order::GetClient(){

	return m_Client;
}


OrderLine Order::GetOrderLine(){

	return m_OrderLine;
}


Receipt Order::GetReceipt(){

	return m_Receipt;
}


void Order::pay(){

}


void Order::removeOrderLine(){

}


void Order::SetClient(Client newVal){

	m_Client = newVal;
}


void Order::SetOrderLine(OrderLine newVal){

	m_OrderLine = newVal;
}


void Order::SetReceipt(Receipt newVal){

	m_Receipt = newVal;
}