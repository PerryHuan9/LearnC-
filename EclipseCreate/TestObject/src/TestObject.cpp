//============================================================================
// Name        : TestObject.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <cstring>
#include <list>

using namespace std;

class Student{
	private:
		string name;
		string id;
		int score;
	public:
		Student(){
			score=0;
		}

		Student(string name,string id,int score){
			this->id=id;
			this->name=name;
			this->score=score;
		}

		void setName(string name){
			this->name=name;
		}

		string getName(){
			return name;
		}

		void setId(string id){
			this->id=id;
		}

		string getId() const{
			return id;
		}

		int getScore() const{
			return score;
		}

		void setScore(int score){
			this->score=score;
		}

		void showString(){
			cout << "������" + name + "\t" + "ѧ�ţ�" + id + "\t" + "�ɼ���" << score
					<< endl;
//			cout <<<< endl;
			//cout << << endl;

		}
		Student(Student& student);

		/**
		 * ���������������һ��ʹ����������ô˺����������ͷ��ڴ�
		 */
		~Student(){
			if(!name.empty()){
				delete &name;
				cout << "���ͷ�name�ڴ�" << endl;
			}
			if(!id.empty()){
				delete &id;
				cout << "���ͷ�id�ڴ�" << endl;
			}

		}

};
Student::Student(Student& student){
	int n=student.getName().length() - 1;
	char* nam=new char[n + 1];
	strcpy(nam,student.getName().c_str());
	name.assign(nam);
	n=strlen(student.getId().c_str());
	nam=new char[n + 1];
	strcpy(nam,student.getId().c_str());
	id.assign(nam);
	score=student.getScore();
}

int main(){
	Student s("˧��","123",123);
	s.showString();
	Student student;
	student.setName("������");
	student.setId("201541314117");
	student.setScore(100);
	student.showString();
	Student s2(student);
	s2.setName("perry");
	s2.showString();
	student.showString();
	list<string> lists;
	lists.push_back("�Ұ���");
	lists.push_back("I love you");
	return 0;
}

