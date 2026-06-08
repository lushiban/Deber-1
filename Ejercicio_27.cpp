#include <iostream>

int cuadrado(int n);

int main(){
    int n{0};
    int resultado{0};

    std::cout << "Ingrese un numero: ";
    std::cin >> n;

    resultado = cuadrado(n);

    std::cout << "El cuadrado de " << n << " es " << resultado << ".";

    return 0;
}

int cuadrado(int n){
    return n * n;
}