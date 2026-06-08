#include <iostream>
#include <fstream>
#include <string>


int main(){
    std::string oracion{};

    std::cout << "Ingrese una oracion: ";
    std::getline(std::cin, oracion);

    std::ofstream archivo("registro.txt", std::ios::app);

    if(!archivo.is_open()){
        std::cout << "Error: no se pudo abrir el archivo.";
        return 1;
    }

    archivo << oracion << "\n";

    archivo.close();

    std::cout << "Linea agregada a \"registro.txt\".";

    return 0;
}

