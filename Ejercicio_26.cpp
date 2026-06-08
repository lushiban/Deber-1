#include <iostream>
#include <string>

void saludar(std::string nombre);

int main(){
    std::string nombre{};

    std::cout << "Ingrese su nombre: ";
    std::cin >> nombre;

    saludar(nombre);

    return 0;
}

void saludar(std::string nombre){
    std::cout << "Hola, " << nombre << "! Bienvenido al sistema.";
}