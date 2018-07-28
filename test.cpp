#include "iostream"
int main(){
	int i=10;
	int sun=0;
	while(i){
		sun+=i;
		std::cout<<i;
		if(i!=1){
			std::cout<<" + ";
		}
		i--;
		
	}
	std::cout<<" = "<<sun<<std::endl;
	
	return 0;



}