#include <iostream>
#include <iomanip>

int main(){
	int n1{}, n2{}, n3{};
	double prom{};
	
	std::cout<<"Ingrese el primer numero: ";
	std::cin>>n1;
	std::cout<<"Ingrese el segundo numero: ";
	std::cin>>n2;
	std::cout<<"Ingrese el tercer numero: ";
	std::cin>>n3;
	
	prom = (n1+n2+n3)/3.0;
	std::cout<<"Promedio: "<<std::fixed<<std::setprecision(2)<<prom;
	
	return 0;
	
	
}