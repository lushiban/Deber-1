#include <iostream>
#include <fstream>
#include <string>

//prototipos  ---------------------------------------------------------------
void crearTexto();
int contarLineas();
int contarPalabras();

//main---------------------------------------------------------------
int main(){
    int lineas{0}, palabras{0};

    crearTexto();

    lineas = contarLineas();
    palabras = contarPalabras();

    std::cout << "Lineas: " << lineas << "\n";
    std::cout << "Palabras: " << palabras;

    return 0;
}

//resto de funciones ---------------------------------------------------------------
void crearTexto(){
    std::ofstream archivo("texto.txt");

    if(!archivo.is_open()){
        std::cout << "Error: no se pudo crear el archivo.";
        return;
    }

    archivo << "La programacion es el arte de resolver problemas\n";
    archivo << "C++ es un lenguaje potente y rapido\n";
    archivo << "Aprender a programar abre muchas puertas\n";

    archivo.close();
}

int contarLineas(){
    std::ifstream archivo("texto.txt");
    std::string linea{};
    int lineas{0};

    if(!archivo.is_open()){
        std::cout << "Error: no se pudo abrir el archivo.";
        return 0;
    }

    while(std::getline(archivo, linea)){
        lineas++;
    }

    archivo.close();

    return lineas;
}

int contarPalabras(){
    std::ifstream archivo("texto.txt");
    std::string palabra{};
    int palabras{0};

    if(!archivo.is_open()){
        std::cout << "Error: no se pudo abrir el archivo.";
        return 0;
    }

    while(archivo >> palabra){
        palabras++;
    }

    archivo.close();

    return palabras;
}