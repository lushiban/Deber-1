#include <iostream>


int main(){
    int *p{new int(99)};

    std::cout << "Valor: " << *p << "\n";
    std::cout << "Direccion: " << p << "\n";

    delete p;
    p = nullptr;

    std::cout << "Memoria liberada correctamente.";

    return 0;
}