#include <iostream>
#include <iomanip>

// prototipos ----------------------
int maximo(int arr[], int n);
int minimo(int arr[], int n);
double promedio(int arr[], int n);

//main ----------------------
int main(){
    int n{0};

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    int *arreglo = new int[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> arreglo[i];
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Maximo: " << maximo(arreglo, n) << "\n";
    std::cout << "Minimo: " << minimo(arreglo, n) << "\n";
    std::cout << "Promedio: " << promedio(arreglo, n);

    delete[] arreglo;

    return 0;
}

// resto de funciones ----------------------
int maximo(int arr[], int n){
    int mayor{arr[0]};

    for(int i{1}; i < n; i++){
        if(arr[i] > mayor){
            mayor = arr[i];
        }
    }

    return mayor;
}

int minimo(int arr[], int n){
    int menor{arr[0]};

    for(int i{1}; i < n; i++){
        if(arr[i] < menor){
            menor = arr[i];
        }
    }

    return menor;
}

double promedio(int arr[], int n){
    int suma{0};

    for(int i{0}; i < n; i++){
        suma += arr[i];
    }

    return static_cast<double>(suma) / n;
}