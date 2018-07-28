#include "stdafx.h"
#include "test.h"

void test1() {
	int eggs = 12;
	char* amount="dozen";
	cout << &eggs<<endl;
	cout << amount << endl;
	//要想输出字符串的地址需要强制转型
	cout << (void*)amount << endl;
}

void test2() {
	cout.put('A').put('p').put('p').put('l').put('e').put('\n');
	cout.put(66).put(66.5).put('\n');
	cout << 'W' << endl;
}

void test3() {
	char* str1 = "I want to success.";
	char* str2 = "I will success.";
	char* str3 = "I would success";
	int i;
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	int len3 = strlen(str3);
	cout << len1 << endl;
	for (int i = 1; i <= len1; i++) {
		cout.write(str1, i)<<endl;
	}
	for (int i = len2; i > 0; i--) {
		cout.write(str2, i)<<endl;
	}
	cout.write(str1, len1+15)<<endl;
	long value = 5654541541641;
	cout.write((char*)&value, sizeof(long)) << endl;
	cout << sizeof(long long) << sizeof(int) << sizeof(double) << sizeof(float) << endl;
}

void test4() {
	cout << "I love you." << flush;
	cout << "Do you love me?" << endl;
	cout << "1234567890\n";
	char ch = 'k';
	int t = 273;
	cout << ch << ":\n";
	cout << t << ":\n";
	cout << -t << ":\n";
	double f1 = 1.200;
	cout << f1 << ":\n";
	cout << f1 + 1.0 / 9 << ":\n";
	double f2 = 1.67e2;
	cout << f2 << ":\n";
	f2 += 1.0 / 3;
	cout << f2 << ":\n";
	cout << (f2*1.0e4) << ":\n";
	double f3 = 2.3e-4;
	cout << f3 << ":\n";
	cout << f3 / 10 << ":\n";

}

void test5() {
	cout << "Enter a integer:\n";
	int n;
	cin >> n;
	cout << "n" << "\t" << "n*n\n";
	cout << n << "\t" << n*n <<"(decimal)\n";
	cout << hex;
	cout << n << "\t" << n*n << "(hexadecimal)\n";
	cout << oct << n << "\t" << n*n << "(octal)\n";
	//两种方式改变使用的计数系统
	dec(cout);
	cout << n << "\t" << n*n << "(decimal)\n";
}
  
void test6() {
	cout.width(10);
	cout << 13 << "#" << 24 << endl;

}



























