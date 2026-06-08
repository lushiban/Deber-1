#include <iostream>

int buscar(int arr[], int n, int valor);

int main(){
    int n{0}, valor{0}, indice{0};

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    int *arreglo = new int[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }

    std::cout << "Ingrese el valor a buscar: ";
    std::cin >> valor;

    indice = buscar(arreglo, n, valor);

    if(indice != -1){
        std::cout << "Valor " << valor << " encontrado en indice " << indice << ".";
    } else {
        std::cout << "Valor " << valor << " no encontrado.";
    }

    delete[] arreglo;

    return 0;
}

int buscar(int arr[], int n, int valor){
    for(int i{0}; i < n; i++){
        if(arr[i] == valor){
            return i;
        }
    }

    return -1;
}