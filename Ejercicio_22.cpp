#include <iostream>

int main(){
    int n{0};
    bool es_primo{true};

    std::cout << "Ingrese un numero positivo: ";
    std::cin >> n;

    if(n <= 1){
        es_primo = false;
    } else {
        for(int i{2}; i < n; i++){
            if(n % i == 0){
                es_primo = false;
                break;
            }
        }
    }

    if(es_primo == true){
        std::cout << n << " es primo.";
    } else {
        std::cout << n << " no es primo.";
    }

    return 0;
}