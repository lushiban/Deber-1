#include <iostream>
#include <string>

//prototipo
void ordenarStrings(std::string *arr, int n);

//main
int main(){
    int n{0};
    std::string *palabras{nullptr};

    std::cout << "Ingrese la cantidad de palabras: ";
    std::cin >> n;

    palabras = new std::string[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese palabra " << i + 1 << ": ";
        std::cin >> palabras[i];
    }

    ordenarStrings(palabras, n);

    std::cout << "Ordenado:\n";

    for(int i{0}; i < n; i++){
        std::cout << palabras[i] << "\n";
    }

    delete[] palabras;
    palabras = nullptr;

    return 0;
}


void ordenarStrings(std::string *arr, int n){
    std::string aux{};

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