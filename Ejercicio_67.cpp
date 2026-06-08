#include <iostream>

//prototipos
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);

//main
int main(){
    int opcion{0}, a{0}, b{0}, resultado{0};

    // con op se puede apuntar a los otros punteros :o
    int (*op)(int, int){nullptr};

    std::cout << "=== Menu de operaciones ===\n";
    std::cout << "1. Sumar\n";
    std::cout << "2. Restar\n";
    std::cout << "3. Multiplicar\n";
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcion;

    std::cout << "Ingrese el primer numero: ";
    std::cin >> a;

    std::cout << "Ingrese el segundo numero: ";
    std::cin >> b;

    if(opcion == 1){
        op = sumar;
    } else if(opcion == 2){
        op = restar;
    } else if(opcion == 3){
        op = multiplicar;
    } else {
        std::cout << "Opcion invalida.";
        return 0;
    }

    resultado = op(a, b);

    std::cout << "Resultado: " << resultado;

    return 0;
}

//resto de funciones
int sumar(int a, int b){
    return a + b;
}

int restar(int a, int b){
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}