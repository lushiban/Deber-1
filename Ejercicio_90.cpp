#include <iostream>
#include <iomanip>

//clases
class CuentaBancaria{
private:
    double saldo;

public:
    CuentaBancaria(double saldo_inicial) : saldo(saldo_inicial){}

    bool depositar(double monto){
        if(monto > 0){
            saldo += monto;
            return true;
        }

        return false;
    }

    bool retirar(double monto){
        if(monto > 0 && monto <= saldo){
            saldo -= monto;
            return true;
        }

        return false;
    }

    double getSaldo(){
        return saldo;
    }
};

//main
int main(){
    double saldo_inicial{0}, monto{0};
    int opcion{0};

    std::cout << "Ingrese el saldo inicial: ";
    std::cin >> saldo_inicial;

    CuentaBancaria cuenta(saldo_inicial);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Saldo inicial: $" << cuenta.getSaldo() << "\n";

    do{
        std::cout << "=== Menu ===\n";
        std::cout << "1. Depositar  2. Retirar  3. Ver saldo  4. Salir\n";
        std::cout << "Ingrese una opcion: ";
        std::cin >> opcion;

        switch(opcion){
            case 1:
                std::cout << "Ingrese el monto a depositar: ";
                std::cin >> monto;

                if(cuenta.depositar(monto) == true){
                    std::cout << "Deposito OK. Saldo: $" << cuenta.getSaldo() << "\n";
                } else {
                    std::cout << "Error: monto invalido. Saldo: $" << cuenta.getSaldo() << "\n";
                }

                break;

            case 2:
                std::cout << "Ingrese el monto a retirar: ";
                std::cin >> monto;

                if(cuenta.retirar(monto) == true){
                    std::cout << "Retiro OK. Saldo: $" << cuenta.getSaldo() << "\n";
                } else {
                    std::cout << "Error: saldo insuficiente. Saldo: $" << cuenta.getSaldo() << "\n";
                }

                break;

            case 3:
                std::cout << "Saldo: $" << cuenta.getSaldo() << "\n";
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

