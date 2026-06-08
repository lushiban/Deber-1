#include <iostream>

int main(){
    int n{0};

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    int *arreglo = new int[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }

    for(int i{n - 1}; i >= 0; i--){
        std::cout << arreglo[i] << " ";
    }

    delete[] arreglo;

    return 0;
}