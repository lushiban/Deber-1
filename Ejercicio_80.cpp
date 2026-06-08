#include <iostream>
#include <iomanip>
#include <string>

void ordenarRanking(std::string *nombres, double *notas, int n);

int main(){
    int n{0};
    std::string *nombres{nullptr};
    double *notas{nullptr};

    std::cout << "Ingrese la cantidad de estudiantes: ";
    std::cin >> n;

    nombres = new std::string[n];
    notas = new double[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese nombre del estudiante " << i + 1 << ": ";
        std::cin >> nombres[i];

        std::cout << "Ingrese nota de " << nombres[i] << ": ";
        std::cin >> notas[i];
    }

    ordenarRanking(nombres, notas, n);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "=== Ranking ===\n";

    for(int i{0}; i < n; i++){
        std::cout << i + 1 << ". " << std::left << std::setw(7) << nombres[i];
        std::cout << " - " << notas[i] << "\n";
    }

    delete[] nombres;
    nombres = nullptr;

    delete[] notas;
    notas = nullptr;

    std::cout << "Memoria liberada.";

    return 0;
}

//funciones
void ordenarRanking(std::string *nombres, double *notas, int n){
    double aux_nota{0};
    std::string aux_nombre{};

    for(int i{0}; i < n - 1; i++){
        for(int j{0}; j < n - 1 - i; j++){
            if(notas[j] < notas[j + 1]){
                aux_nota = notas[j];
                notas[j] = notas[j + 1];
                notas[j + 1] = aux_nota;

                aux_nombre = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = aux_nombre;
            }
        }
    }
}