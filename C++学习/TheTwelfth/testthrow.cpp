#include "stdafx.h"
#include <iostream>
#include "title.h"
#include "ZeroException.h"


using namespace std;

int divide(int x, int y) {
	if (y == 0)throw y;
	else return x / y;
}
double divide(double x, int y) {
	if (y == 0)throw ZeroException();
	 return x / y;
}


void testThrow() {
	try {
		cout << "3/2=" << divide(3, 2) << endl;
		cout << "5/0=" << divide(5, 0) << endl;
		cout << "3/2=" << divide(3, 2) << endl;
	}catch (int) {
		cout << "Exception by dividing zero.\n" << endl;
	}

	try {
		cout << "a/b" << divide(3.0, 0) << endl;
	}catch (ZeroException ex) {
		cout << "Exception is :" << ex.getMessage() << endl;
	}
	
}

double dSqrt(int a) {
	if (a < 0)throw 1;
	return sqrt(a);
}



void test2() {
	int x;
	while (true) {
		cout << "Please input a positive integer:";
		cin >> x;
		try {
			cout << dSqrt(x) << endl;
		}catch(int){
			cout << "It is a negative interger" << endl;
		}
	}
}

int getArray(int index) {
	int arrays[] = { 1,2,4,56,25,2,6 };
	cout << arrays[index] << endl;
	if(index > 6)throw index;
	return arrays[index];
}

void test3() {
	int index;
	while (true){
		cout << "Please input the index of array:";
		cin >> index;
		try {
			cout << getArray(index) << endl;
		} catch(int){
			cout << "array out of index" << endl;
		}
	}
}

void test4(int v) {
	try {
		if (v>0)throw v;
		else throw "value is less than zero";
	} catch (int i) {
		cout << "catch int,its value is " << i << endl;
	} catch (char* c) {
		cout << "catch string:" << c << endl;
	}
}

void test5() {
	double* pArray[10];
	try {
		for (int i = 0; i < 10; i++) {
			pArray[i] = new double[80000000];
			cout << "Allocated 80000000 double is pArray[" << i << "]" << endl;
		}
	} catch (bad_alloc&memoryAllocationException) {
			cout << "Exception occured ;" << memoryAllocationException.what() << endl;
		}
}
















































