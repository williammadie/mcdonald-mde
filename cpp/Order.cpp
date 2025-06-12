///////////////////////////////////////////////////////////
//  Order.cpp
//  Implementation of the Class Order
//  Created on:      12-juin-2025 18:14:40
//  Original author: willi
///////////////////////////////////////////////////////////

#include "Order.h"


Order::Order(){

}



Order::~Order(){

}





void Order::addOrderLine(){

}


int Order::calculateOrderPrice(){

	return 0;
}


Client Order::GetClient(){

	return m_Client;
}


Client Order::getClient(){

	return m_Client;
}


OrderLine Order::GetOrderLine(){

	return m_OrderLine;
}


OrderLine Order::getOrderLine(){

	return m_OrderLine;
}


Receipt Order::GetReceipt(){

	return m_Receipt;
}


Receipt Order::getReceipt(){

	return m_Receipt;
}


void Order::pay(){

}


void Order::removeOrderLine(){

}


void Order::SetClient(Client newVal){

	m_Client = newVal;
}


void Order::setClient(Client newVal){

	m_Client = newVal;
}


void Order::SetOrderLine(OrderLine newVal){

	m_OrderLine = newVal;
}


void Order::setOrderLine(OrderLine newVal){

	m_OrderLine = newVal;
}


void Order::SetReceipt(Receipt newVal){

	m_Receipt = newVal;
}


void Order::setReceipt(Receipt newVal){

	m_Receipt = newVal;
}