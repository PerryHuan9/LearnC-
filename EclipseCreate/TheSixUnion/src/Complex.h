/*
 * Complex.h
 *
 *  Created on: 2017Äê10ÔÂ27ÈÕ
 *      Author: perry
 */

#ifndef HEADERFILES_COMPLEX_H_
#define HEADERFILES_COMPLEX_H_
#include <cmath>
#include <iostream>
using namespace std;

void testComplex();

class Complex{
	private:
		double real;
		double image;
	public:
		Complex();
		Complex(double real,double image);

		double abs();
		Complex add(Complex c);
		Complex add(double real,double image);
		Complex substract(Complex c);
		Complex substract(double real,double image);
		void show();
		Complex operator+(Complex c);
		Complex operator-(Complex c);
		Complex operator++();//++a
		Complex operator++(int i);//a++

		double getImage() const{
			return image;
		}

		void setImage(double image){
			this->image=image;
		}

		double getReal() const{
			return real;
		}

		void setReal(double real){
			this->real=real;
		}

};

#endif /* HEADERFILES_COMPLEX_H_ */
