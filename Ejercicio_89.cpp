#include <iostream>
#include <iomanip>

//creacion de clases - prototipos?
class Rectangulo{
private:
    double base, altura;

public:
    Rectangulo(double b, double h) : base(b), altura(h){}

    double calcularArea(){
        return base * altura;
    }

    double calcularPerimetro(){
        return 2 * (base + altura);
    }

    void imprimir(){
        std::cout << std::fixed << std::setprecision(2);
        std::cout << "Rectangulo: base=" << base << ", altura=" << altura << "\n";
        std::cout << "Area: " << calcularArea() << "\n";
        std::cout << "Perimetro: " << calcularPerimetro();
    }
};

//main
int main(){
    double base{0}, altura{0};

    std::cout << "Ingrese la base: ";
    std::cin >> base;

    std::cout << "Ingrese la altura: ";
    std::cin >> altura;

    Rectangulo r(base, altura);

    r.imprimir();

    return 0;
}

