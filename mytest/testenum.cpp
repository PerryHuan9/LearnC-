#include "testenum.h"
using namespace std;

void testEnum(){
	enum week{Sun,Mon,Tue,Wen,Thu,Fri,Sat};
	cout<<"Tue"<<Tue<<endl;
	cout<<"Wen"<<Wen<<endl;
	cout<<"Thu"<<Thu<<endl;
	cout<<"Fri"<<Fri<<endl;
	cout<<"Sat"<<Sat<<endl;
	cout<<"Fri:"<<Fri<<endl;
	week day=Sun;
	switch(day){
		case Mon:cout<<"Monday should clean home"<<endl;break;
		case Tue:cout<<"Tuesday should run 1000 meter"<<endl;break;
		default:cout<<"other day should do hard to study"<<endl;break;

	}
}