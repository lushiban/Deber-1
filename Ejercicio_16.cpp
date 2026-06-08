#include <iostream>

int main(){
    int n{0};

    std::cout << "Ingrese el numero para multiplicar: ";
    std::cin >> n;

    for(int i{1}; i <= 10; i++){
        std::cout << n << " x " << i << " = " << n * i << "\n";
    }

    return 0;
}