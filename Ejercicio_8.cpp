#include <iostream>

int main(){
	int edad{0};
	std::string nombre{};
	double estatura{};
	
	std::cout<<"Ingrese su nombre: ";
	std::cin>>nombre;
	std::cout<<"Ingrese su edad: ";
	std::cin>>edad;
	std::cout<<"Ingrese su estatura(en metros): ";
	std::cin>>estatura;
	
	
	std::cout<<"===Ficha Personal===\n"<<"\n";
	std::cout<<"Nombre : "<<nombre<<"\n";
	std::cout<<"Edad : "<<edad<<" anos\n";
	std::cout<<"Estatura : "<<estatura<<" m\n";
	
	
}