#include <iostream>

int main(){
    int arreglo[5]{0};

    for(int i{0}; i < 5; i++){
        std::cout << "Ingrese elemento " << i << ": ";
        std::cin >> *(arreglo + i);
    }

    for(int i{0}; i < 5; i++){
        std::cout << "Elemento " << i << ": " << *(arreglo + i) << "\n";
    }

    return 0;
}