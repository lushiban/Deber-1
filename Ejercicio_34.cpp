#include <iostream>

void imprimirLinea(int n = 20, char c = '-');

int main(){
    imprimirLinea();
    imprimirLinea(10);
    imprimirLinea(5, '*');

    return 0;
}

void imprimirLinea(int n, char c){
    for(int i{0}; i < n; i++){
        std::cout << c;
    }

    std::cout << "\n";
}