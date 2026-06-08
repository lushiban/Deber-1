#include <iostream>
#include <iomanip>
#include <string>

//clases
class Sensor{
private:
    std::string nombre;
    double valor;

public:
    Sensor(std::string n, double v) : nombre(n), valor(v){
        std::cout << nombre << " activado.\n";
    }

    ~Sensor(){
        std::cout << nombre << " desactivado.\n";
    }

    double leer(){
        return valor;
    }

    std::string getNombre(){
        return nombre;
    }
};

//main
int main(){
    Sensor s1("Temperatura", 36.6);
    Sensor s2("Presion", 101.3);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << s1.getNombre() << ": " << s1.leer() << "\n";
    std::cout << s2.getNombre() << ": " << s2.leer() << "\n";

    return 0;
}

