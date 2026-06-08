#include <iostream>

int main() {
    int nota{0};
    char calificacion{};

    std::cout << "Ingrese su nota: ";
    std::cin >> nota;

    if (nota < 0 || nota > 100) {
        std::cout << "\nIngreso incorrecto";
    }else if (nota >= 90) {
        calificacion = 'A';
    } else if (nota >= 80) {
    	calificacion = 'B';
    } else if (nota >= 70) {
        calificacion = 'C';
    } else if (nota >= 60) {
        calificacion = 'D';
    } else {
        calificacion = 'F';
    }

    std::cout << "\nNota: " << nota;
    std::cout << "   Calificacion: " << calificacion;

    return 0;
}