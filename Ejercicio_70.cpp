#include <iostream>

int main(){
    int n{0};
    int *arreglo{nullptr};

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    arreglo = new int[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }

    std::cout << "Arreglo: ";
    for(int i{0}; i < n; i++){
        std::cout << arreglo[i] << " ";
    }

    delete[] arreglo;
    arreglo = nullptr;

    std::cout << "\nMemoria liberada.";

    return 0;
}