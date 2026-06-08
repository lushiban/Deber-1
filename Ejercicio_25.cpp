#include <iostream>

int main(){
    int nota{0};

    do{
        std::cout << "Ingrese nota (0-100): ";
        std::cin >> nota;

        if(nota < 0 || nota > 100){
            std::cout << "Valor invalido. Intente de nuevo.\n";
        }

    }while(nota < 0 || nota > 100);

    std::cout << "Nota aceptada: " << nota;

    return 0;
}