#include <iostream>

bool esPrimo(int n);

int main(){
    std::cout << "Primos entre 1 y 50:\n";

    for(int i{1}; i <= 50; i++){
        if(esPrimo(i) == true){
            std::cout << i << " ";
        }
    }

    return 0;
}

bool esPrimo(int n){
    if(n <= 1){
        return false;
    }

    for(int i{2}; i < n; i++){
        if(n % i == 0){
            return false;
        }
    }

    return true;
}