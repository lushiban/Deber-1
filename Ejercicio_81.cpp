#include <iostream>
#include <fstream>

int main(){
    std::ofstream archivo("saludo.txt");

    if(!archivo.is_open()){
        std::cout << "Error: no se pudo crear el archivo.";
        return 1;
    }

    archivo << "Holi\n";
    archivo << "Como andan mi gente\n";

    archivo.close();

    std::cout << "Archivo \"saludo.txt\" creado.\n";
    std::cout << "2 lineas escritas.";

    return 0;
}
