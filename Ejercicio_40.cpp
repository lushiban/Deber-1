#include <iostream>
#include <iomanip>
#include <string>

// prototipos -----------
double calcularPromedio3(double a, double b, double c);
double calcularAreaRectangulo(double base, double altura);
bool esMayorDeEdad(int edad);
std::string clasificarEdad(int edad);

//main -----------
int main(){
    double nota_1{0}, nota_2{0}, nota_3{0}, promedio{0};
    double base{0}, altura{0}, area{0};
    int edad{0};
    std::string clasificacion{};

    std::cout << "Ingrese la nota 1: ";
    std::cin >> nota_1;

    std::cout << "Ingrese la nota 2: ";
    std::cin >> nota_2;

    std::cout << "Ingrese la nota 3: ";
    std::cin >> nota_3;

    std::cout << "Ingrese la base del rectangulo: ";
    std::cin >> base;

    std::cout << "Ingrese la altura del rectangulo: ";
    std::cin >> altura;

    std::cout << "Ingrese la edad: ";
    std::cin >> edad;


    promedio = calcularPromedio3(nota_1, nota_2, nota_3);
    area = calcularAreaRectangulo(base, altura);
    clasificacion = clasificarEdad(edad);


    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Promedio de notas: " << promedio << "\n";
    std::cout << "Area del rectangulo: " << area << "\n";

    std::cout << "Edad " << edad << ": " << clasificacion;

    if(esMayorDeEdad(edad) == true){
        std::cout << " (mayor de edad)";
    } else {
        std::cout << " (menor de edad)";
    }

    return 0;
}

// resto de funciones ----------------------
double calcularPromedio3(double a, double b, double c){
    return (a + b + c) / 3;
}

double calcularAreaRectangulo(double base, double altura){
    return base * altura;
}

bool esMayorDeEdad(int edad){
    if(edad >= 18){
        return true;
    } else {
        return false;
    }
}

std::string clasificarEdad(int edad){
    if(edad < 12){
        return "Nino";
    } else if(edad <= 17){
        return "Adolescente";
    } else {
        return "Adulto";
    }
}