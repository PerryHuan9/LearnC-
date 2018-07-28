/*
 * apple.h
 *
 *  Created on: 2017Äê10ÔÂ29ÈÕ
 *      Author: perry
 */

#ifndef APPLE_H_
#define APPLE_H_
#include <string>
#include <iostream>
using namespace std;
enum Category{golden,granny,winesap,gala,mcintosh,rome,gravenstein};

class Apple{
	private:
		string color;
		double weight;
		Category category;
	public:
		Apple();
		Apple(string color,Category category,double weight);
		~Apple();
		void eat();


};





#endif /* APPLE_H_ */
