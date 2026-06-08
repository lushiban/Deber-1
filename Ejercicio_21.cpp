#include <iostream>
#include <string>

int main(){
    std::string palabra{};
    int vocales{0};

    std::cout << "Ingrese una palabra: ";
    std::cin >> palabra;

    for(int i{0}; i < palabra.size(); i++){
        if(palabra[i] == 'a' || palabra[i] == 'A' ||
           palabra[i] == 'e' || palabra[i] == 'E' ||
           palabra[i] == 'i' || palabra[i] == 'I' ||
           palabra[i] == 'o' || palabra[i] == 'O' ||
           palabra[i] == 'u' || palabra[i] == 'U'){
            vocales++;
        }
    }

    std::cout << "Vocales en \"" << palabra << "\": " << vocales;

    return 0;
}