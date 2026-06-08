#include <iostream>

int main(){
    int n{0}, suma{0};

    std::cout << "Ingrese el tamano de la matriz cuadrada: ";
    std::cin >> n;

    int **matriz = new int*[n];

    for(int i{0}; i < n; i++){
        matriz[i] = new int[n];
    }

    for(int i{0}; i < n; i++){
        for(int j{0}; j < n; j++){
            std::cout << "Ingrese valor [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    std::cout << "Diagonal principal: ";

    for(int i{0}; i < n; i++){
        std::cout << matriz[i][i] << " ";
        suma += matriz[i][i];
    }

    std::cout << "\nSuma: " << suma;

    for(int i{0}; i < n; i++){
        delete[] matriz[i];
    }

    delete[] matriz;

    return 0;
}