/*
 * TestFriend.h
 *
 *  Created on: 2017Äê10ÔÂ25ÈÕ
 *      Author: perry
 */

#ifndef TESTFRIEND_H_
#define TESTFRIEND_H_
#include "iostream"
#include <math.h>
using namespace std;

class Point{
	private:
		double x,y;
	public:
		Point();
		Point(double x=0,double y=0);
		~Point();
		friend double distance(Point a,Point b);
};

double distance(Point x,Point y);

class Student{
	private:
		string name,id,grade;
	public:
		Student(string name,string id,string grade);
		friend class School;

};

class School{
	private:
		string administration,education;
	public:
		void showStudent(Student a);

};

#endif /* TESTFRIEND_H_ */
