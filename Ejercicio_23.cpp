#include <iostream>

int main(){
    int n{0}, primero{0}, actual{1}, siguiente{0};

    std::cout << "Ingrese la cantidad de terminos de Fibonacci: ";
    std::cin >> n;

    for(int i{0}; i < n; i++){
        std::cout << primero << " ";

        siguiente = primero + actual;
        primero = actual;
        actual = siguiente;
    }

    return 0;
}