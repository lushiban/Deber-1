#include <iostream>

int factorial(int n);

int main(){
    int n{0};

    std::cout << "Ingrese el numero para calcular el factorial: ";
    std::cin >> n;

    std::cout << n << "! = " << factorial(n);

    return 0;
}

int factorial(int n){
    if(n == 0){
        return 1;
    } else {
        return n * factorial(n - 1);
    }
}