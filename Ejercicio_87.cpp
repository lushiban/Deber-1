#include <iostream>
#include <fstream>
#include <string>

int main(){
    std::ifstream entrada("estudiantes.txt");
    std::ofstream salida("respaldo.txt");
    std::string linea{};
    int contador{0};

    if(!entrada.is_open()){
        std::cout << "Error: no se pudo abrir \"estudiantes.txt\".";
        return 1;
    }

    if(!salida.is_open()){
        std::cout << "Error: no se pudo crear \"respaldo.txt\".";
        return 1;
    }

    while(std::getline(entrada, linea)){
        salida << linea << "\n";
        contador++;
    }

    entrada.close();
    salida.close();

    std::cout << "Copiadas " << contador << " lineas a \"respaldo.txt\".";

    return 0;
}

