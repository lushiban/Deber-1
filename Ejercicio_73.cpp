#include <iostream>

int main(){
    int *a{new int(5)};
    int *b{new int[10]};

    //EL ERROR: se libera el primer bloque antes de que se use a
    delete a;
    a = nullptr;

    a = new int(20);

    std::cout << "Valor final de a: " << *a << "\n";

    delete a;
    a = nullptr;

    delete[] b;
    b = nullptr;

    std::cout << "Memoria liberada correctamente.";

    return 0;
}