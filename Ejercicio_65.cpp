#include <iostream>

// prototipos
void llenarCuadrados(int *arr, int n);
void imprimirArreglo(int *arr, int n);

//main
int main(){
    int n{0};

    std::cout << "Ingrese la cantidad de elementos: ";
    std::cin >> n;

    int *arreglo = new int[n];

    llenarCuadrados(arreglo, n);
    imprimirArreglo(arreglo, n);

    delete[] arreglo;

    return 0;
}

// resto de funciones
void llenarCuadrados(int *arr, int n){
    for(int i{0}; i < n; i++){
        *(arr + i) = i * i;
    }
}

void imprimirArreglo(int *arr, int n){
    for(int i{0}; i < n; i++){
        std::cout << *(arr + i) << " ";
    }
}