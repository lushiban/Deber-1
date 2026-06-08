#include <iostream>

int main(){
    int opcion{0};

    do{
        std::cout << "===== Menu =====\n";
        std::cout << "1. Saludar\n";
        std::cout << "2. Despedirse\n";
        std::cout << "3. Salir\n";
        std::cout << "Ingrese una opcion: ";
        std::cin >> opcion;

        switch(opcion){
            case 1:
                std::cout << "Hola!\n";
                break;
            case 2:
                std::cout << "Hasta luego!\n";
                break;
            case 3:
                std::cout << "Programa terminado.";
                break;
            default:
                std::cout << "Opcion invalida.\n";
        }

    }while(opcion != 3);

    return 0;
}