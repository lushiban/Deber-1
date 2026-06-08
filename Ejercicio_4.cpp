#include <iostream>

int main(){
	int cantidad{0};
	double precio{0}; 
	std::cout<<"Ingrese el precio: ";
	std::cin>>precio;
	std::cout<<"\nIngrese la cantidad comprada: ";
	std::cin>>cantidad;
	std::cout<<"\nTotal a pagar: $"<<precio*cantidad;
	
	return 0;
}