#include <iostream>
#include <iomanip>

// Prototipos-----
double areaRectangulo(double base, double altura);
double areaTriangulo(double base, double altura);
double areaCirculo(double radio);

//main-----
int main(){
    int opcion{0};
    double base{0}, altura{0}, radio{0}, area{0};

    std::cout << std::fixed << std::setprecision(2);

    do{
        std::cout << "=== Calculadora de areas ===\n";
        std::cout << "1. Rectangulo\n";
        std::cout << "2. Triangulo\n";
        std::cout << "3. Circulo\n";
        std::cout << "4. Salir\n";
        std::cout << "Ingrese una opcion: ";
        std::cin >> opcion;

        switch(opcion){
            case 1:
                std::cout << "Ingrese la base del rectangulo: ";
                std::cin >> base;

                std::cout << "Ingrese la altura del rectangulo: ";
                std::cin >> altura;

                area = areaRectangulo(base, altura);

                std::cout << "Base: " << base << "  Altura: " << altura;
                std::cout << " -> Area: " << area << "\n";
                break;

            case 2:
                std::cout << "Ingrese la base del triangulo: ";
                std::cin >> base;

                std::cout << "Ingrese la altura del triangulo: ";
                std::cin >> altura;

                area = areaTriangulo(base, altura);

                std::cout << "Base: " << base << "  Altura: " << altura;
                std::cout << " -> Area: " << area << "\n";
                break;

            case 3:
                std::cout << "Ingrese el radio del circulo: ";
                std::cin >> radio;

                area = areaCirculo(radio);

                std::cout << "Radio: " << radio;
                std::cout << " -> Area: " << area << "\n";
                break;

            case 4:
                std::cout << "Hasta pronto.";
                break;

            default:
                std::cout << "Opcion invalida.\n";
        }

    }while(opcion != 4);

    return 0;
}


// resto de funciones--
double areaRectangulo(double base, double altura){
    return base * altura;
}

double areaTriangulo(double base, double altura){
    return (base * altura) / 2;
}

double areaCirculo(double radio){
    double pi{3.141592};

    return pi * radio * radio;
}