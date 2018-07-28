#include "stdafx.h"
#include "circle.h"


Circle::Circle(double radius){
	this->radius = radius;
}

double Circle::Circumference() {
	return 2 * PI*this->radius;
}

double Circle::Area() {
	return PI*radius*radius;
}


















