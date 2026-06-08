#include <iostream>

int main(){
    int x{100};
    int *p{&x};
    int **pp{&p};

    std::cout << "x   = " << x << "\n";
    std::cout << "*p  = " << *p << "\n";
    std::cout << "**pp = " << **pp;

    return 0;
}