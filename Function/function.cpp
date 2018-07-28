#include <iostream>
using namespace std;
int input(void){
	int val;
	cout<<"Please input a value:";
	cin>>val;
	return val;

}

int myAbs(int val){
	return (val>0?val:-val);
}

void output(int val){
	cout<<"The absolute value is:"<<val<<endl;

}

int main(){
	int mval,mabs;
	char mFlag='Y';
	int input();
	int ouput(int a);
	int myAbs(int b);
	while(mFlag=='Y'||mFlag=='y'){
		mval=input();
		mabs=myAbs(mval);
		output(mabs);
		cout<<"Continue?(Y/N): ";
		cin>>mFlag;
	}

	return 0;
}