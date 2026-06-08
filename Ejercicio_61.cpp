#include <iostream>

int main(){
    char palabra[100]{};
    char *p{nullptr};
    int longitud{0};

    std::cout << "Ingrese una palabra: ";
    std::cin >> palabra;

    p = palabra;

    while(*p != '\0'){
        longitud++;
        p++;
    }

    std::cout << "Palabra: " << palabra << "\n";
    std::cout << "Longitud: " << longitud;

    return 0;
}