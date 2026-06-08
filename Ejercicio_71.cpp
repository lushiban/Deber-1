#include <iostream>

//main
int main(){
    int n{0}, nuevo_valor{0};
    int *arreglo{nullptr}, *arreglo_extendido{nullptr};

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    arreglo = new int[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }

    std::cout << "Ingrese el nuevo valor: ";
    std::cin >> nuevo_valor;

    std::cout << "Original: ";
    for(int i{0}; i < n; i++){
        std::cout << arreglo[i] << " ";
    }

    arreglo_extendido = new int[n + 1];

    for(int i{0}; i < n; i++){
        arreglo_extendido[i] = arreglo[i];
    }

    arreglo_extendido[n] = nuevo_valor;

    delete[] arreglo;
    arreglo = nullptr;

    arreglo = arreglo_extendido;
    arreglo_extendido = nullptr;
    n++;

    std::cout << "\nExtendido: ";
    for(int i{0}; i < n; i++){
        std::cout << arreglo[i] << " ";
    }

    delete[] arreglo;
    arreglo = nullptr;

    return 0;
}