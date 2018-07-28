#include "testparameter.h"

void parameter(){
	cite();
	int a(2),b(3);
	cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
	swap(a,b);
	cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
	cout<<"a="<<a<<"\t"<<"b="<<b<<endl;
	swap(&a,&b);
	cout<<"a="<<a<<setw(10)<<"b="<<b<<endl;
	testArray();

}

void cite(){
	int a=2;
	int& b=a;
	cout<<"a="<<a<<endl;
	cout<<"b="<<b<<endl;
}

void swap(int& a,int& b){
	if(b>a){
		int t=a;
		a=b;
		b=t;
	}
}


void swap(int* a,int* b){
	int t=*a;
	*a=*b;
	*b=t;

}

void testArray(){
	int (*p)[3];
	int t=0,i;
		p=new int[2][3];
	for(i=0;i<2;i++){
		for(int j=0;j<3;j++ ){
			p[i][j]=t++;
		}
	}
	
	for(i=0;i<2;i++){
		for(int j=0;j<3;j++){
			cout<<endl<<*(p+i)<<endl;
			cout<<setw(3)<<*(*(p+i)+j);
		}
		cout<<endl;
	}
	

}

void sendParam(int* a){
	*a=888;
}
const double PI=3.1415926;
double circleArea(double r){
	return r*r*PI;

}
float triangle(float width,float height){
	
	return width*height/2;
}

void testOmitParam(){
	cout<<"without giving radius,the area is:"<<circleArea()<<endl;
	cout<<"radius is 3,the area is:"<<circleArea(3)<<endl;
	cout<<"width is 5 and not height,the triangle area is:"<<triangle(5)<<endl;
	cout<<"width is 6 and height is 5,the triangle area is:"<<triangle(6,5)<<endl;
}

int commonDicisor(int a,int b){
	swap(a,b);
	while(a%b!=0){
		a=a%b;
		swap(a,b);
	}
	return b;
}