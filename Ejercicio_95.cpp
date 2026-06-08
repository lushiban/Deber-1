#include <iostream>
#include <iomanip>
#include <cmath>

//clases
class Figura{
public:
    virtual ~Figura(){}

    virtual double calcularArea() = 0;
    virtual double calcularPerimetro() = 0;

    virtual void describir(){
        std::cout << "Area=" << calcularArea();
        std::cout << ", Perimetro=" << calcularPerimetro();
    }
};

class Circulo : public Figura{
private:
    double radio;
    const double pi{3.14159};

public:
    Circulo(double r) : radio(r){}

    double calcularArea() override{
        return pi * radio * radio;
    }

    double calcularPerimetro() override{
        return 2 * pi * radio;
    }

    void describir() override{
        std::cout << "Circulo (r=" << radio << "): ";
        Figura::describir();
    }
};

class Triangulo : public Figura{
private:
    double a, b, c;

public:
    Triangulo(double lado_a, double lado_b, double lado_c) 
        : a(lado_a), b(lado_b), c(lado_c){}

    double calcularArea() override{
        double s{(a + b + c) / 2.0};

        return std::sqrt(s * (s - a) * (s - b) * (s - c));
    }

    double calcularPerimetro() override{
        return a + b + c;
    }

    void describir() override{
        std::cout << "Triangulo (" << a << "," << b << "," << c << "): ";
        Figura::describir();
    }
};

//main
int main(){
    double radio{0}, a{0}, b{0}, c{0};

    std::cout << "Ingrese el radio del circulo: ";
    std::cin >> radio;

    std::cout << "Ingrese lado a del triangulo: ";
    std::cin >> a;

    std::cout << "Ingrese lado b del triangulo: ";
    std::cin >> b;

    std::cout << "Ingrese lado c del triangulo: ";
    std::cin >> c;

    Circulo circulo(radio);
    Triangulo triangulo(a, b, c);

    std::cout << std::fixed << std::setprecision(2);

    circulo.describir();
    std::cout << "\n";

    triangulo.describir();

    return 0;
}

