#include <iostream>
#include <iomanip>
#include <string>

int main(){
    int n{0};
    double nota_1{0}, nota_2{0}, nota_3{0}, aux_promedio{0};
    std::string aux_nombre{};

    std::cout << "Ingrese la cantidad de estudiantes: ";
    std::cin >> n;

    std::string *nombres = new std::string[n];
    double *promedios = new double[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese nombre del estudiante " << i + 1 << ": ";
        std::cin >> nombres[i];

        std::cout << "Ingrese nota 1 de " << nombres[i] << ": ";
        std::cin >> nota_1;

        std::cout << "Ingrese nota 2 de " << nombres[i] << ": ";
        std::cin >> nota_2;

        std::cout << "Ingrese nota 3 de " << nombres[i] << ": ";
        std::cin >> nota_3;

        promedios[i] = (nota_1 + nota_2 + nota_3) / 3;
    }

    for(int i{0}; i < n - 1; i++){
        for(int j{0}; j < n - 1 - i; j++){
            if(promedios[j] < promedios[j + 1]){
                aux_promedio = promedios[j];
                promedios[j] = promedios[j + 1];
                promedios[j + 1] = aux_promedio;

                aux_nombre = nombres[j];
                nombres[j] = nombres[j + 1];
                nombres[j + 1] = aux_nombre;
            }
        }
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "===== Ranking de estudiantes =====\n";

    for(int i{0}; i < n; i++){
        std::cout << i + 1 << ". " << nombres[i];
        std::cout << " - Promedio: " << promedios[i] << "\n";
    }

    delete[] nombres;
    delete[] promedios;

    return 0;
}