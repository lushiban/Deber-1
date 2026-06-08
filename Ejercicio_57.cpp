#include <iostream>

int main(){
    int x{10};
    int *p{&x};

    std::cout << "Antes: " << x << "\n";

    *p = 99;

    std::cout << "Despues: " << x;

    return 0;
}