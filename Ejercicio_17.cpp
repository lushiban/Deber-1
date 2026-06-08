#include <iostream>

int main(){
    int n{0};
    long long factorial{1};

    std::cout << "Ingrese el numero para calcular el factorial: ";
    std::cin >> n;

    for(int i{1}; i <= n; i++){
        factorial *= i;
    }

    std::cout << n << "! = " << factorial;

    return 0;
}