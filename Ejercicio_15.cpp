#include <iostream>

int main(){
    int n{0};
    int numero{0};
    int suma{0};

    std::cout << "Ingrese la cantidad de numeros a sumar: ";
    std::cin >> n;

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese el numero " << i + 1 << ": ";
        std::cin >> numero;
        suma += numero;
    }

    std::cout << "Suma total: " << suma;

    return 0;
}