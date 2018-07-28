#include "testparameter.h"
#include "teststring.h"
#include "testenum.h"
#include "function.h"
using namespace std;

class Student {
	private:
		string name;
		string id;
		int score;
	public:
		Student(){}

		Student(string name,string id,int score){
			 this->id=id;
			 this->name=name;
			 this->score=score;
		 }
		void setName(string name) {
			this->name = name;
		}

		string getName() {
			return name;
		}

		void setId(string id) {
			this->id = id;
		}

		string getId() const {
			return id;
		}

		int getScore() const {
			return score;
		}

		void setScore(int score) {
			this->score = score;
		}
};





int main(){
	
	parameter();
	teststring();
	testEnum();
	int array[5]={1,2,3,4,5};
	sendParam(array+2);
	cout<<"array[2]:"<<array[2]<<endl;
	cout<<"The big common dicisor between 12 and 18 is: "<<commonDicisor(12,18)<<endl;
	cout<<"请输入你要计算的阶乘数:";
	int n;
	cin>>n;
	cout<<n<<"的阶乘为："<<calculateFactorial(n)<<endl;

	Student student;
	student.setName("黄益凛");
	student.setId("201541314117");
	student.setScore(100);
	cout << student.getName() << endl;

	return 0;

}



