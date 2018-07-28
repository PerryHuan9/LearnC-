#include "function.h"

long calculateFactorial(int n){
	long f;
	if(n<0){
		cout<<"nÐ¡ÓÚ0"<<endl;
	}else if(n==0){
		f=1;
	}else{
		f=n*calculateFactorial(n-1);
	}
	return f;
}