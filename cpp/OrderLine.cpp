///////////////////////////////////////////////////////////
//  OrderLine.cpp
//  Implementation of the Class OrderLine
//  Created on:      12-juin-2025 17:25:39
//  Original author: willi
///////////////////////////////////////////////////////////

#include "OrderLine.h"


OrderLine::OrderLine(){

}



OrderLine::~OrderLine(){

}





Product OrderLine::GetProduct(){

	return m_Product;
}


void OrderLine::SetProduct(Product newVal){

	m_Product = newVal;
}