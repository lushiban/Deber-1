#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

//prototipos

//main
int main(){
    std::ifstream archivo("estudiantes.txt");
    std::string nombre_buscado{}, nombre{};
    double nota{0};
    bool encontrado{false};

    if(!archivo.is_open()){
        std::cout << "Error: no se pudo abrir \"estudiantes.txt\".";
        return 1;
    }

    std::cout << "Ingrese el nombre a buscar: ";
    std::cin >> nombre_buscado;

    while(archivo >> nombre >> nota){
        if(nombre == nombre_buscado){
            encontrado = true;
            break;
        }
    }

    std::cout << std::fixed << std::setprecision(2);

    if(encontrado == true){
        std::cout << "Estudiante encontrado: " << nombre << " - " << nota;
    } else {
        std::cout << "Estudiante no encontrado.";
    }

    archivo.close();

    return 0;
}

//resto de funciones