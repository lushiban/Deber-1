#include <iostream>


int* crearArreglo(int n, int valorInicial);


int main(){
    int n{0}, valor_inicial{0};
    int *arreglo{nullptr};

    std::cout << "Ingrese la cantidad de elementos: ";
    std::cin >> n;

    std::cout << "Ingrese el valor inicial: ";
    std::cin >> valor_inicial;

    arreglo = crearArreglo(n, valor_inicial);

    std::cout << "Arreglo de " << n << " elementos inicializados en ";
    std::cout << valor_inicial << ":\n";

    for(int i{0}; i < n; i++){
        std::cout << arreglo[i] << " ";
    }

    delete[] arreglo;
    arreglo = nullptr;

    return 0;
}

int* crearArreglo(int n, int valorInicial){
    int *arr{new int[n]};

    for(int i{0}; i < n; i++){
        arr[i] = valorInicial;
    }

    return arr;
}