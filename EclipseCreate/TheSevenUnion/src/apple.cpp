/*
 * Apple.cpp
 *
 *  Created on: 2017年10月30日
 *      Author: perry
 */
#include "apple.h"

Apple::~Apple(){
	delete &color;
}

Apple::Apple(){
	weight=0;
	category=golden;
}

Apple::Apple(string color,Category category,double weight){
	this->color=color;
	this->category=category;
	this->weight=weight;
}

void Apple::eat(){
	cout<<"吃了一个"<<category<<"苹果"<<endl;
}


















