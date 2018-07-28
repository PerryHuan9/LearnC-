// UnionEleven.cpp: 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include <iostream>
using namespace std;

void testEof() {
	int character;
	cout << "before input,cin.eof()=" << cin.eof() << endl;
	cout << "please input a sentance:" << endl;
	while ((character = cin.get()) != EOF) {
		cout.put( character);
	}
	cout << "EOF in this system is:" << character << endl;
	cout << "after input,cin.eof()=" << cin.eof() << endl;

}

void test2() {
	const int SIZE = 80;
	char buf1[SIZE];
	cout << "please input a sentance:" << endl;
	cin >> buf1;
	cout << "the string read with cin is:" << buf1 << endl;
	cout << "please input a sentance:" << endl;
	char buf2[SIZE];
	cin.get(buf2, SIZE);
	cout << "the string read with cin.get() is:" << buf2 << endl;
}



int main()
{
	//testEof();
	test2();
    return 0;
}

