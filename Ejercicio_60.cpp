#include <iostream>

void intercambiar(int *a, int *b);

int main(){
    int a{0}, b{0};

    std::cout << "Ingrese el valor de a: ";
    std::cin >> a;

    std::cout << "Ingrese el valor de b: ";
    std::cin >> b;

    std::cout << "Antes:  a=" << a << ", b=" << b << "\n";

    intercambiar(&a, &b);

    std::cout << "Despues: a=" << a << ", b=" << b;

    return 0;
}

void intercambiar(int *a, int *b){
    int aux{0};

    aux = *a;
    *a = *b;
    *b = aux;
}