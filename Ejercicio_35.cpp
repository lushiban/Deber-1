#include <iostream>

bool esPar(int n);
void imprimirPares(int inicio, int fin);

int main(){
    int inicio{0}, fin{0};

    std::cout << "Ingrese el inicio del rango: ";
    std::cin >> inicio;

    std::cout << "Ingrese el final del rango: ";
    std::cin >> fin;

    std::cout << "Pares entre " << inicio << " y " << fin << ":\n";
    imprimirPares(inicio, fin);

    return 0;
}

bool esPar(int n){
    if(n % 2 == 0){
        return true;
    } else {
        return false;
    }
}

void imprimirPares(int inicio, int fin){
    for(int i{inicio}; i <= fin; i++){
        if(esPar(i) == true){
            std::cout << i << " ";
        }
    }
}