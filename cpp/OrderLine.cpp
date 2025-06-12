///////////////////////////////////////////////////////////
//  OrderLine.cpp
//  Implementation of the Class OrderLine
//  Created on:      12-juin-2025 18:14:56
//  Original author: willi
///////////////////////////////////////////////////////////

#include "OrderLine.h"


OrderLine::OrderLine(){

}



OrderLine::~OrderLine(){

}





int OrderLine::calculateOrderLinePrice(){

	return 0;
}


Product OrderLine::GetProduct(){

	return m_Product;
}


Product OrderLine::getProduct(){

	return m_Product;
}


void OrderLine::SetProduct(Product newVal){

	m_Product = newVal;
}


void OrderLine::setProduct(Product newVal){

	m_Product = newVal;
}