#include <iostream>

int main(){
    int n{0};

    std::cout << "Ingrese el numero de filas del triangulo: ";
    std::cin >> n;

    for(int i{1}; i <= n; i++){
        for(int j{1}; j <= i; j++){
            std::cout << "*";
        }
        std::cout << "\n";
    }

    return 0;
}