#include <iostream>
#include <string>
#include <cctype>

int main(){
    std::string oracion{};

    std::cout << "Ingrese una oracion: ";
    std::getline(std::cin, oracion);

    std::cout << "Longitud: " << oracion.length() << "\n";

    for(int i{0}; i < oracion.length(); i++){
        oracion[i] = std::toupper(oracion[i]);
    }

    std::cout << "En mayusculas: " << oracion;

    return 0;
}