// UnionSeven.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "math1.h"
#include<iostream>
#include "circle.h"
#include"math2.h"
using namespace math1;
namespace c =std;
using namespace c;

int main()
{
	Circle circle1(2), c;
	cout << "radius is 2,its circumference:" << circle1.Circumference() << endl;
	cout << "radius is 2,its area :" << circle1.Area() << endl;
	cout << c.Area() << endl;
	int a = -10, b = -20;
	cout << "in math;a+b=" <<math1:: add(a, b) << endl;
	cout << "in math2:a+b=" << math2::add(a, b) << endl;
	cout << "in math:a-b=" << math1::substract(a, b) << endl;
    return 0;
}

