#include <iostream>

// prototipos ----------------------------------------
void imprimirArreglo(int arr[], int n);
void ordenarBurbuja(int arr[], int n);

//main ----------------------------------------
int main(){
    int n{0};

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    int *arreglo = new int[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }

    std::cout << "Arreglo original: ";
    imprimirArreglo(arreglo, n);

    ordenarBurbuja(arreglo, n);

    std::cout << "\nArreglo ordenado: ";
    imprimirArreglo(arreglo, n);

    delete[] arreglo;

    return 0;
}

// resto de funciones ----------------------------------------
void imprimirArreglo(int arr[], int n){
    for(int i{0}; i < n; i++){
        std::cout << arr[i] << " ";
    }
}

void ordenarBurbuja(int arr[], int n){
    int aux{0};

    for(int i{0}; i < n - 1; i++){
        for(int j{0}; j < n - 1 - i; j++){
            if(arr[j] > arr[j + 1]){
                aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
            }
        }
    }
}