/*
 * Complex.cpp
 *
 *  Created on: 2017Äê10ÔÂ27ÈÕ
 *      Author: perry
 */

#include "Complex.h"

void testComplex(){
	Complex c(3,-4),c2(-1,3);
	cout << "c.real=" << c.getReal() << endl;
	c.show();
	c2.show();
	cout << "|c|=" << c.abs() << endl;
	c.add(c2).show();
	c.add(-1,3).show();
	(c + c2).show();
	c.substract(c2).show();
	c.substract(-1,3).show();
	(c - c2).show();
	((c - c2)++).show();
	++c;
}

Complex::Complex(){
	image=0;
	real=0;
}

Complex::Complex(double real,double image){
	this->real=real;
	this->image=image;
}

void Complex::show(){
	if(image > 0)
		cout << real << "+" << image << "i" << endl;
	else{
		cout << real << image << "i" << endl;
	}
}

double Complex::abs(){
	return sqrt(real * real + image * image);
}

Complex Complex::add(Complex c){
	Complex newComplex(real + c.real,image + c.image);
	return newComplex;
}

Complex Complex::add(double real,double image){
	Complex newComplex(this->real + real,this->image + image);
	return newComplex;
}

Complex Complex::substract(Complex c){
	Complex com(real - c.real,image - c.image);
	return com;
}
Complex Complex::substract(double real,double image){
	Complex com(this->real - real,this->image - image);
	return com;
}

Complex Complex::operator +(Complex c){
	Complex newComplex(real + c.real,image + c.image);
	return newComplex;
}

Complex Complex::operator -(Complex c){
	Complex com(real - c.real,image - c.image);
	return com;
}

Complex Complex::operator ++(int i){
	Complex com(real + 1,image + 1);
	return com;
}

Complex Complex::operator ++(){
	cout << "++a" << endl;
}

