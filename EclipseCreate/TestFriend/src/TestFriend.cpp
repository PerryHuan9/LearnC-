//============================================================================
// Name        : TestFriend.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include "TestFriend.h"
#include <cmath>

Point::Point(){x=0;y=0;}

Point::Point(double x,double y){
	this->x=x;
	this->y=y;
}

Point::~Point(){}

double distance(Point a,Point b){
	return sqrt(pow((a.x-b.x),2)+pow(a.y-b.y,2));
}

Student::Student(string name,string id,string grade){
	this->name=name;
	this->grade=grade;
	this->id=id;
}

void School::showStudent(Student a){
	cout<<"名字："<<a.name<<"\n年级："<<a.grade<<"\n学号："<<a.id<<endl;
}























