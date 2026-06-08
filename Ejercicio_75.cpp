#include <iostream>

//main
int main(){
    int a{42};
    int *b{new int(42)};

    std::cout << "Stack: " << a << "    Heap: " << *b << "\n";

    *b = 99;

    std::cout << "Stack: " << a << "    Heap: " << *b << "\n";

    delete b;
    b = nullptr;

    std::cout << "Heap liberado.";

    return 0;
}