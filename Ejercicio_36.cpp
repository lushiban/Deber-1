#include <iostream>
#include <string>

std::string invertir(std::string p);

int main(){
    std::string palabra{}, palabra_invertida{};

    std::cout << "Ingrese una palabra: ";
    std::cin >> palabra;

    palabra_invertida = invertir(palabra);

    std::cout << "Original: " << palabra << "\n";
    std::cout << "Invertida: " << palabra_invertida;

    return 0;
}

std::string invertir(std::string p){
    std::string invertida{};
    int tamano = p.size();

    for(int i{tamano - 1}; i >= 0; i--){
        invertida.push_back(p[i]);
    }

    return invertida;
}