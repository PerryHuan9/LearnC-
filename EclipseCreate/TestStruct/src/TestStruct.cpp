//============================================================================
// Name        : TestStruct.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;
/**
 * 结构体---特殊的类
 */
struct student {
		string name;
		string sex;
		string id;
		string grade;
		student() {
		}
		student(string name, string sex, string id, string grade) {
			this->name = name;
			this->sex = sex;
			this->id = id;
			this->grade = grade;
		}
		string toString() {
			return "姓名：" + name + "    " + "性别：" + sex + "    " + "学号：" + id
					+ "    " + "年级：" + grade + "\n";
		}
};

int main() {
	student s("perry", "man", "201541314117", "大三");
	cout << s.toString() << endl;
	cin >> s.name >> s.sex >> s.id >> s.grade;
	cout << s.toString() << endl;
	student stu[3] = { { "ximon", "man", "201541314117", "one" },
					   { "perry","man", "201541314117", "one" },
			           { "petter", "man", "201541314117","one" } };
	cout<<stu[0].toString()<<stu[1].toString()<<stu[2].toString()<<endl;

	return 0;
}
