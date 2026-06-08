#include <iostream>

int main(){
    int matriz[3][3]{0}, suma{0};

    for(int i{0}; i < 3; i++){
        for(int j{0}; j < 3; j++){
            std::cout << "Ingrese valor [" << i + 1 << "][" << j + 1 << "]: ";
            std::cin >> matriz[i][j];
        }
    }

    for(int i{0}; i < 3; i++){
        suma = 0;

        for(int j{0}; j < 3; j++){
            suma += matriz[i][j];
        }

        std::cout << "Suma fila " << i + 1 << ": " << suma << "\n";
    }

    for(int j{0}; j < 3; j++){
        suma = 0;

        for(int i{0}; i < 3; i++){
            suma += matriz[i][j];
        }

        std::cout << "Suma columna " << j + 1 << ": " << suma << "\n";
    }

    return 0;
}