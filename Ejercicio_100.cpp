#include <iostream>
#include <iomanip>
#include <string>

//prototipos--------------------------------------------------------------------
class Empleado{
private:
    std::string nombre;
    double salario;

public:
    Empleado(std::string n, double s) : nombre(n), salario(s){}

    virtual ~Empleado(){}

    std::string getNombre(){
        return nombre;
    }

    double getSalario(){
        return salario;
    }

    virtual double calcularBono() = 0;
    virtual void imprimir() = 0;
};

class Programador : public Empleado{
private:
    std::string lenguaje;

public:
    Programador(std::string n, double s, std::string l) 
        : Empleado(n, s), lenguaje(l){}

    double calcularBono() override{
        return getSalario() * 0.10;
    }

    void imprimir() override{
        std::cout << getNombre() << " (Programador/" << lenguaje << "): ";
        std::cout << "Salario=$" << getSalario();
        std::cout << ", Bono=$" << calcularBono() << "\n";
    }
};

class Gerente : public Empleado{
private:
    std::string departamento;

public:
    Gerente(std::string n, double s, std::string d) 
        : Empleado(n, s), departamento(d){}

    double calcularBono() override{
        return getSalario() * 0.20;
    }

    void imprimir() override{
        std::cout << getNombre() << " (Gerente/" << departamento << "): ";
        std::cout << "Salario=$" << getSalario();
        std::cout << ", Bono=$" << calcularBono() << "\n";
    }
};

//main----------------------------------------------------------------------
int main(){
    double total_bonos{0};

    Empleado *equipo[3];

    equipo[0] = new Programador("Ana", 3000, "Python");
    equipo[1] = new Gerente("Luis", 5000, "Sistemas");
    equipo[2] = new Programador("Carla", 2800, "C++");

    std::cout << std::fixed << std::setprecision(2);

    for(int i{0}; i < 3; i++){
        equipo[i]->imprimir();
        total_bonos += equipo[i]->calcularBono();
    }

    std::cout << "-----------------------------\n";
    std::cout << "Total bonos a pagar: $" << total_bonos;

    for(int i{0}; i < 3; i++){
        delete equipo[i];
        equipo[i] = nullptr;
    }

    return 0;
}

