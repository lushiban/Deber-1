#include <iostream>
#include <iomanip>
#include <string>

int main(){
    int n{0}, indice_mejor{0};

    std::cout << "Ingrese la cantidad de estudiantes: ";
    std::cin >> n;

    std::string *nombres = new std::string[n];
    double *notas = new double[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese el nombre del estudiante " << i + 1 << ": ";
        std::cin >> nombres[i];
    }

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese la nota de " << nombres[i] << ": ";
        std::cin >> notas[i];
    }

    for(int i{1}; i < n; i++){
        if(notas[i] > notas[indice_mejor]){
            indice_mejor = i;
        }
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Mejor estudiante: " << nombres[indice_mejor];
    std::cout << " con nota " << notas[indice_mejor];

    delete[] nombres;
    delete[] notas;

    return 0;
}