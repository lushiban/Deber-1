#include <iostream>

int main(){
    int filas{0}, columnas{0};

    std::cout << "Ingrese la cantidad de filas: ";
    std::cin >> filas;

    std::cout << "Ingrese la cantidad de columnas: ";
    std::cin >> columnas;

    int **matriz = new int*[filas];

    for(int i{0}; i < filas; i++){
        matriz[i] = new int[columnas];
    }

    for(int i{0}; i < filas; i++){
        for(int j{0}; j < columnas; j++){
            std::cout << "Ingrese valor [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    for(int i{0}; i < filas; i++){
        for(int j{0}; j < columnas; j++){
            std::cout << matriz[i][j] << "  ";
        }

        std::cout << "\n";
    }

    for(int i{0}; i < filas; i++){
        delete[] matriz[i];
    }

    delete[] matriz;

    return 0;
}