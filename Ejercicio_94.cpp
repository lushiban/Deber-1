#include <iostream>
#include <string>

//clases 
class Animal{
private:
    std::string nombre;

public:
    Animal(std::string n) : nombre(n){}

    virtual ~Animal(){}

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
    Animal *animales[4];

    animales[0] = new Perro("Rex");
    animales[1] = new Gato("Luna");
    animales[2] = new Perro("Max");
    animales[3] = new Gato("Michi");

    for(int i{0}; i < 4; i++){
        std::cout << animales[i]->getNombre() << ": ";
        animales[i]->hacerSonido();
        std::cout << "\n";
    }

    for(int i{0}; i < 4; i++){
        delete animales[i];
        animales[i] = nullptr;
    }

    return 0;
}

