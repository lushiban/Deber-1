#include <iostream>

int main(){
    int x{42};
    int *p{&x};

    std::cout << "Valor de x: " << x << "\n";
    std::cout << "Direccion de x: " << &x << "\n";
    std::cout << "Valor de p: " << p << "\n";
    std::cout << "Valor de *p: " << *p;

    return 0;
}