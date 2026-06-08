#include <iostream>
#include <iomanip>


double mayor(double a, double b);
double mayor(double a, double b, double c);

int main(){
    double a{0}, b{0}, c{0}, d{0}, e{0};

    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> c;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> d;

    std::cout << "Ingrese el tercer numero: ";
    std::cin >> e;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Mayor de 2: " << mayor(a, b) << "\n";
    std::cout << "Mayor de 3: " << mayor(c, d, e);

    return 0;
}

double mayor(double a, double b){
    if(a > b){
        return a;
    } else {
        return b;
    }
}

double mayor(double a, double b, double c){
    double mayor_actual{a};

    if(b > mayor_actual){
        mayor_actual = b;
    }

    if(c > mayor_actual){
        mayor_actual = c;
    }

    return mayor_actual;
}