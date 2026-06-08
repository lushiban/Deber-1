#include <iostream>

int main(){
    int *p{new int(10)};

    std::cout << "Valor antes de delete: " << *p << "\n";

    delete p;
    p = nullptr;

    if(p == nullptr){
        std::cout << "Puntero puesto en nullptr. Acceso bloqueado.";
    } else {
        std::cout << *p;
    }

    return 0;
}