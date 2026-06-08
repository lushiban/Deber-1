#include <iostream>
#include <string>

int main(){
    int n{0};

    std::cout << "Ingrese la cantidad de nombres: ";
    std::cin >> n;

    std::string *nombres = new std::string[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese nombre " << i + 1 << ": ";
        std::cin >> nombres[i];
    }

    for(int i{0}; i < n; i++){
        std::cout << i + 1 << ". " << nombres[i] << "\n";
    }

    delete[] nombres;

    return 0;
}