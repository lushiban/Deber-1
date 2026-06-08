#include <iostream>
#include <string>

//clases
class Animal{
private:
    std::string nombre;

public:
    Animal(std::string n) : nombre(n){}

    std::string getNombre(){
        return nombre;
    }

    virtual void hacerSonido(){
        std::cout << "...";
    }
};

class Perro : public Animal{
public:
    Perro(std::string n) : Animal(n){}

    void hacerSonido() override{
        std::cout << "Guau!";
    }
};

class Gato : public Animal{
public:
    Gato(std::string n) : Animal(n){}

    void hacerSonido() override{
        std::cout << "Miau!";
    }
};

//main
int main(){
    Perro perro("Rex");
    Gato gato("Luna");

    std::cout << "Perro (" << perro.getNombre() << "): ";
    perro.hacerSonido();

    std::cout << "\nGato (" << gato.getNombre() << "): ";
    gato.hacerSonido();

    return 0;
}

