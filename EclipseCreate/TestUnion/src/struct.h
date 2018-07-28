/*
 * struct.h
 *
 *  Created on: 2017��10��25��
 *      Author: perry
 */

#ifndef STRUCT_H_
#define STRUCT_H_
#include <iostream>
#include <iomanip>
#include <math.h>
using namespace std;




/**
 * ������������������Ĳ������佹����������
 */
union focus{
		int number;
		double zoom;
};

const double PI=3.1415926;

/**
 * ֱ������ϵ��ʾ����
 */

struct Rectangular{
		double x;
		double y;
//		Colar transformToColar(){
//			Colar colar;
//			colar.radius=(x * x + y * y) ^ 0.5;
//			colar.angle=asin(y / colar.radius);
//			return colar;
//		}
		void show(){
			cout<<"x:"<<x<<"\t"<<"y:"<<y<<endl;
		}
};


/**
 * ������ϵ��ʾ����
 */

struct Colar{
		double radius;
		double angle;
		Rectangular transformToRectangular(){
			Rectangular rect;
			rect.x=radius * cos(angle);
			rect.y=this->radius * sin(angle / 180 * PI);
			return rect;
		}

		void show(){
			cout<<"radius:"<<radius<<"\t"<<"angle:"<<angle<<endl;
		}
};

/**
 *����ʹ�����ַ�����ʾ�������
 */
union point{
		struct Colar coordinate1;
		struct Rectangular coordinate2;
};

#endif /* STRUCT_H_ */
