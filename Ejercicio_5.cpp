#include <iostream>

int main(){
	int num{0};
	
	std::cout<<"Ingrese el numero: ";
	std::cin>>num;
	std::cout<<"\n"<<num<<" % 2 = "<< num%2;
	if((num%2)==0){
		std::cout<<"\nEs par";
	}else{
		std::cout<<"\nEs impar";
	}
	
	return 0;
}