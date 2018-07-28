#include "teststring.h"

void teststring(){
	string stringA="I love you ";
	cout<<"stringA="<<stringA<<endl;
	string stringB(stringA);
	cout<<"stringB="<<stringB<<endl;
	string strcopy1,strcopy2;
	strcopy1=stringA;
	cout<<"strcopy="<<strcopy1<<endl;
	strcopy2.assign(strcopy1).append(",mother.");
	cout<<"strcopy2="<<strcopy2<<endl;
	strcopy2.insert(18," and father");
	cout<<"stropyB="<<strcopy2<<endl;
	string strcopyC=strcopy2+"mother and father Hello!!!";
	cout<<"strcopyC="<<strcopyC<<endl;
	int location=stringA.find_first_of("mother");
	cout<<"The first location of mother:"<<location<<endl;
	bool com=stringA.compare(stringB);
	cout<<"Compare of strngA and stringB is:"<<com<<endl;



}