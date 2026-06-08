#include <iostream>

//prototipo
int* buscarDinamico(int *arr, int n, int val);

//main
int main(){
    int n{0}, valor{0};
    int *arreglo{nullptr}, *resultado{nullptr};

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    arreglo = new int[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }

    std::cout << "Ingrese el valor a buscar: ";
    std::cin >> valor;

    resultado = buscarDinamico(arreglo, n, valor);

    if(resultado != nullptr){
        std::cout << "Elemento encontrado: " << *resultado;
    } else {
        std::cout << "Elemento no encontrado.";
    }

    delete[] arreglo;
    arreglo = nullptr;
    resultado = nullptr;

    return 0;
}

//funciones
int* buscarDinamico(int *arr, int n, int val){
    for(int i{0}; i < n; i++){
        if(arr[i] == val){
            return &arr[i];
        }
    }

    return nullptr;
}