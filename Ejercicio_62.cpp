#include <iostream>

// prototipo------------------------------
int* encontrarMaximo(int arr[], int n);
void imprimirArreglo(int arr[], int n);

//main ------------------------------
int main(){
    int n{0};
    int *p_maximo{nullptr};

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    int *arreglo = new int[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }

    p_maximo = encontrarMaximo(arreglo, n);

    std::cout << "Maximo encontrado: " << *p_maximo << "\n";

    *p_maximo = *p_maximo * 2;

    std::cout << "Arreglo tras duplicar el maximo: ";
    imprimirArreglo(arreglo, n);

    delete[] arreglo;

    return 0;
}

// resto de funciones ------------------------------
int* encontrarMaximo(int arr[], int n){
    int *p_mayor{&arr[0]};

    for(int i{1}; i < n; i++){
        if(arr[i] > *p_mayor){
            p_mayor = &arr[i];
        }
    }

    return p_mayor;
}

void imprimirArreglo(int arr[], int n){
    for(int i{0}; i < n; i++){
        std::cout << arr[i] << " ";
    }
}