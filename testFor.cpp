#include<iostream>
int main(){
	int sum=0;
	for(int i=-3;i<=3;++i){
		std::cout<<i<<std::endl;
		sum+=i;
	}
	
	std::cout<<sum<<std::endl;
	int value;

	while(std::cin>>value){
		sum+=value;
		std::cout<<value<<std::endl;
	
	}
	std::cout<<sum<<std::endl;





	return 0;



}