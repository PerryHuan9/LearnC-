/*
 * main.cpp
 * ������Ԫ��������Ԫ��
 *  Created on: 2017��10��25��
 *  Author: perry
 */

#include "TestFriend.h"


int main() {
	Point a(1,5),b(2,6);
	cout << "the distance of a and b is:"<<distance(a,b) << endl;
	Student s("������","201541314117","��ѧ���꼶");
	School school;
	school.showStudent(s);
	return 0;
}




