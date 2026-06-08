#include <iostream>

// prototipo
int busquedaBinaria(int arr[], int n, int valor);

//main
int main(){
    int n{0}, valor{0}, indice{0}, arreglo[100]{0};

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero ordenado " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }

    std::cout << "Ingrese el valor a buscar: ";
    std::cin >> valor;

    indice = busquedaBinaria(arreglo, n, valor);

    if(indice != -1){
        std::cout << "Valor " << valor << " encontrado en indice " << indice;
        std::cout << " (busqueda binaria).";
    } else {
        std::cout << "Valor " << valor << " no encontrado.";
    }

    return 0;
}

// resto de funciones
int busquedaBinaria(int arr[], int n, int valor){
    int izquierda{0}, derecha{n - 1}, medio{0};

    while(izquierda <= derecha){
        medio = (izquierda + derecha) / 2;

        if(arr[medio] == valor){
            return medio;
        } else if(arr[medio] < valor){
            izquierda = medio + 1;
        } else {
            derecha = medio - 1;
        }
    }

    return -1;
}