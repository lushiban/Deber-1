#include <iostream>

int main(){
    int numero{0};
    int positivos{0};
    int negativos{0};

    std::cout << "Ingrese un numero(0 para terminar): ";
    std::cin >> numero;

    while(numero != 0){
        if(numero > 0){
            positivos++;
        } else {
            negativos++;
        }

        std::cout << "Ingrese un numero, 0 para terminar: ";
        std::cin >> numero;
    }

    std::cout << "Positivos: " << positivos << "\n";
    std::cout << "Negativos: " << negativos;

    return 0;
}