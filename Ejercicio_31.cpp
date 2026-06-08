#include <iostream>
#include <iomanip>

void calcularCirculo(double radio, double &area, double &per);

int main(){
    double radio{0}, area{0}, per{0};

    std::cout << "Ingrese el radio: ";
    std::cin >> radio;

    calcularCirculo(radio, area, per);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Radio: " << radio << "\n";
    std::cout << "Area: " << area << "\n";
    std::cout << "Perimetro: " << per;

    return 0;
}

void calcularCirculo(double radio, double &area, double &per){
    double pi{3.14159};

    area = pi * radio * radio;
    per = 2 * pi * radio;
    
}