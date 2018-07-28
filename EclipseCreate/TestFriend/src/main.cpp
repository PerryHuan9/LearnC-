/*
 * main.cpp
 * 测试友元函数和友元类
 *  Created on: 2017年10月25日
 *  Author: perry
 */

#include "TestFriend.h"


int main() {
	Point a(1,5),b(2,6);
	cout << "the distance of a and b is:"<<distance(a,b) << endl;
	Student s("黄益凛","201541314117","大学三年级");
	School school;
	school.showStudent(s);
	return 0;
}




