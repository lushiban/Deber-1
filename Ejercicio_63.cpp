#include <iostream>

// prototipos ---------------------------------
void triplicarRef(int &n);
void triplicarPtr(int *p);


//main ---------------------------------
int main(){
    int numero{0};

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    std::cout << "Valor inicial: " << numero << "\n";

    triplicarRef(numero);
    std::cout << "Despues de triplicar Referencia: " << numero << "\n";

    triplicarPtr(&numero);
    std::cout << "Despues de triplicar Puntero: " << numero;

    return 0;
}

// resto de funciones ---------------------------------
void triplicarRef(int &n){
    n = n * 3;
}

void triplicarPtr(int *p){
    *p = *p * 3;
}