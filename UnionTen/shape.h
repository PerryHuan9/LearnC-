#pragma once
#include<iostream>
using namespace std;

#define PI 3.14159

/*
²âÊÔÐéº¯Êý
*/


class Shape {
private :
	static int sb;
public:
	
	static int show() {
		return sb;
	}
	virtual void area() = 0;
	virtual void circumference() = 0;
};

class Rectangle :public Shape {
private:
	double height, width;
public:
	Rectangle(double h, double w) :height(h), width(w) {}
	void area() {
		cout << "rectangle area is£º" << height*width << endl;
	}

	void circumference() {
		cout << "rectangle circumference id:" << 2 * height + 2 * width << endl;
	}
};

class Circle :public Shape {
private:
	double r;
public:
	Circle(double r1) :r(r1) {}

	void area() {
		cout << "circle area is:" << PI*r*r << endl;
	}
	 
	void circumference() {
		cout << "circle circumference is:" << 2 * PI*r << endl;
	}
};





















