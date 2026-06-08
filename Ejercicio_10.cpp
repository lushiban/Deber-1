#include <iostream>
#include <iomanip>
int main(){
	double radio{0};
	double area{}, perimetro{};
	std::cout<<"Ingrese el radio del circulo: ";
	std::cin>>radio;
	
	area = 3.141592 * radio * radio;
	perimetro = 2 * 3.141592 * radio;
	
	std::cout<<std::fixed<<std::setprecision(2);
	std::cout<<"\nRadio: "<<radio;
	std::cout<<"\nArea: "<<area; 
	std::cout<<"\nPerimetro: "<<perimetro;
}