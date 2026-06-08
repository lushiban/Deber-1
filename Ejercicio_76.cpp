#include <iostream>
#include <iomanip>

//prototipo
int* leerArregloDinamico(int &n);
void imprimirArreglo(int *arr, int n);
double promedioArreglo(int *arr, int n);
void liberarArreglo(int* &arr);

//main
int main(){
    int n{0};
    int *arreglo{nullptr};
    double promedio{0};

    arreglo = leerArregloDinamico(n);
    promedio = promedioArreglo(arreglo, n);

    std::cout << "Arreglo: ";
    imprimirArreglo(arreglo, n);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "\nPromedio: " << promedio << "\n";

    liberarArreglo(arreglo);

    std::cout << "Memoria liberada.";

    return 0;
}

//resto de funciones
int* leerArregloDinamico(int &n){
    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    int *arr{new int[n]};

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> arr[i];
    }

    return arr;
}

void imprimirArreglo(int *arr, int n){
    for(int i{0}; i < n; i++){
        std::cout << arr[i] << " ";
    }
}

double promedioArreglo(int *arr, int n){
    int suma{0};

    for(int i{0}; i < n; i++){
        suma += arr[i];
    }

    return static_cast<double>(suma) / n;
}

void liberarArreglo(int* &arr){
    delete[] arr;
    arr = nullptr;
}