#include <iostream>
#include <string>

//claseeessss
class Volador{
public:
    virtual void volar(){
        std::cout << "Fiu fiu!";
    }
};

class Nadador{
public:
    virtual void nadar(){
        std::cout << "Splash splash!";
    }
};

class Pato : public Volador, public Nadador{
private:
    std::string nombre;

public:
    Pato(std::string n) : nombre(n){}

    void volar() override{
        std::cout << nombre << " vuela: Fiu fiu!";
    }

    void nadar() override{
        std::cout << nombre << " nada: Splash splash!";
    }
};

//main
int main(){
    Pato pato("Donald");

    pato.volar();
    std::cout << "\n";

    pato.nadar();

    return 0;
}

