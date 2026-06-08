#include <iostream>

// Prototipo
int* buscarPtr(int *arr, int n, int valor);

int main(){
    int n{0}, valor{0};
    int *resultado{nullptr};

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    int *arreglo = new int[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }

    std::cout << "Ingrese el valor a buscar: ";
    std::cin >> valor;

    resultado = buscarPtr(arreglo, n, valor);

    if(resultado != nullptr){
        std::cout << "Valor " << *resultado << " encontrado.";
    } else {
        std::cout << "Valor " << valor << " no encontrado.";
    }

    delete[] arreglo;

    return 0;
}

// resto de funciones
int* buscarPtr(int *arr, int n, int valor){
    for(int i{0}; i < n; i++){
        if(arr[i] == valor){
            return &arr[i];
        }
    }

    return nullptr;
}
