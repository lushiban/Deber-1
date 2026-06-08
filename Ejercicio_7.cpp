#include <iostream>
#include <iomanip>
int main(){
	double temperatura_c{},temperatura_f{0};
	std::cout<<"Ingrese la temperatura en Celcius: ";
	std::cin>>temperatura_c;
	temperatura_f = ((temperatura_c * 9)/5)+32;
	std::cout << std::fixed << std::setprecision(1);
	std::cout << temperatura_c << " C = " << temperatura_f << " F";
}