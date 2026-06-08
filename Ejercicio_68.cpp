#include <iostream>
#include <iomanip>

// Prototipos -------------------------------
void leerArreglo(int *arr, int n);
void imprimirArreglo(int *arr, int n);
int calcularSuma(int *arr, int n);
double calcularPromedio(int *arr, int n);
void invertirArreglo(int *arr, int n);



//main -------------------------------
int main(){
    int n{0}, suma{0};
    double promedio{0};

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    int *arreglo = new int[n];

    leerArreglo(arreglo, n);

    suma = calcularSuma(arreglo, n);
    promedio = calcularPromedio(arreglo, n);

    invertirArreglo(arreglo, n);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Suma: " << suma << "\n";
    std::cout << "Promedio: " << promedio << "\n";
    std::cout << "Invertido: ";
    imprimirArreglo(arreglo, n);

    delete[] arreglo;

    return 0;
}

// resto de funciones--------------------------------------------------------------
void leerArreglo(int *arr, int n){
    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> *(arr + i);
    }
}

void imprimirArreglo(int *arr, int n){
    for(int i{0}; i < n; i++){
        std::cout << *(arr + i) << " ";
    }
}

int calcularSuma(int *arr, int n){
    int suma{0};

    for(int i{0}; i < n; i++){
        suma += *(arr + i);
    }

    return suma;
}

double calcularPromedio(int *arr, int n){
    return static_cast<double>(calcularSuma(arr, n)) / n;
}

void invertirArreglo(int *arr, int n){
    int izquierda{0}, derecha{n - 1}, aux{0};

    while(izquierda < derecha){
        aux = *(arr + izquierda);
        *(arr + izquierda) = *(arr + derecha);
        *(arr + derecha) = aux;

        izquierda++;
        derecha--;
    }
}