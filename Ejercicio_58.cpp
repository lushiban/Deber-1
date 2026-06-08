#include <iostream>

// Prototipo
void duplicar(int *p);

int main(){
    int numero{0};

    std::cout << "Ingrese un numero: ";
    std::cin >> numero;

    std::cout << "Antes: " << numero << "\n";

    duplicar(&numero);

    std::cout << "Despues: " << numero;

    return 0;
}

// resto de funciones
void duplicar(int *p){
    *p = *p * 2;
}