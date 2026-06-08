#include <iostream>
#include <fstream>
#include <string>

void crearPoema();
void leerPoema();


int main(){
    crearPoema();
    leerPoema();

    return 0;
}
 //funcioeneees
 
void crearPoema(){
    std::ofstream archivo("poema.txt");

    if(!archivo.is_open()){
        std::cout << "Error: no se pudo crear el archivo.";
        return;
    }

    archivo << "Las rosas son rojas\n";
    archivo << "El mar es profundo\n";
    archivo << "El codigo es logica\n";
    archivo << "C++ es poderoso\n";

    archivo.close();
}

void leerPoema(){
    std::ifstream archivo("poema.txt");
    std::string linea{};
    int contador{1};

    if(!archivo.is_open()){
        std::cout << "Error: no se pudo abrir el archivo.";
        return;
    }

    while(std::getline(archivo, linea)){
        std::cout << contador << ": " << linea << "\n";
        contador++;
    }

    archivo.close();
}