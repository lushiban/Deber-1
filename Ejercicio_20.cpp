#include <iostream>

int main(){
    int n{0};
    int numero{0};
    int mayor{0};
    int menor{0};
    int i{1};

    std::cout << "Ingrese la cantidad de numeros que desea ingresar: ";
    std::cin >> n;

    std::cout << "Ingrese numero 1: ";
    std::cin >> numero;

    mayor = numero;
    menor = numero;

    while(i < n){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> numero;

        if(numero > mayor){
            mayor = numero;
        }

        if(numero < menor){
            menor = numero;
        }

        i++;
    }

    std::cout << "Mayor: " << mayor << "\n";
    std::cout << "Menor: " << menor;

    return 0;
}