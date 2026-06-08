#include <iostream>

class Contador{
private:
    static int total;
    static char siguiente;
    char nombre;

public:
    Contador() : nombre(siguiente){
        total++;
        siguiente++;

        std::cout << "(crear " << nombre << ") Total objetos: " << total << "\n";
    }

    ~Contador(){
        total--;

        std::cout << "(destruir " << nombre << ") Total objetos: " << total << "\n";
    }

    static int getTotal(){
        return total;
    }
};

int Contador::total = 0;
char Contador::siguiente = 'A';

int main(){
    std::cout << "Total objetos: " << Contador::getTotal() << "\n";

    {
        Contador a;
        Contador b;
        Contador c;
    }

    return 0;
}

