#include <iostream>
#include <iomanip>

double calcularIMC(double peso, double altura);

int main(){
    double peso{0};
    double altura{0};
    double imc{0};

    std::cout << "Ingrese el peso: ";
    std::cin >> peso;

    std::cout << "Ingrese la altura: ";
    std::cin >> altura;

    imc = calcularIMC(peso, altura);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "IMC: " << imc;

    return 0;
}

// resto de funciones
double calcularIMC(double peso, double altura){
    return peso / (altura * altura);
}