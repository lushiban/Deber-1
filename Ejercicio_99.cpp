#include <iostream>
#include <iomanip>

//claseeasas
class Lista{
private:
    int *datos;
    int capacidad, cantidad;

public:
    Lista(int cap) : capacidad(cap), cantidad(0){
        datos = new int[capacidad];
    }

    ~Lista(){
        delete[] datos;
        datos = nullptr;

        std::cout << "\nDestructor: memoria liberada.";
    }

    void agregar(int val){
        if(cantidad < capacidad){
            datos[cantidad] = val;
            cantidad++;
        } else {
            std::cout << "Lista llena.\n";
        }
    }

    void imprimir(){
        std::cout << "Lista: ";

        for(int i{0}; i < cantidad; i++){
            std::cout << datos[i] << " ";
        }

        std::cout << "\n";
    }

    double promedio(){
        int suma{0};

        if(cantidad == 0){
            return 0;
        }

        for(int i{0}; i < cantidad; i++){
            suma += datos[i];
        }

        return static_cast<double>(suma) / cantidad;
    }
};

//main
int main(){
    int capacidad{0}, numero{0};

    std::cout << "Ingrese la capacidad de la lista: ";
    std::cin >> capacidad;

    Lista lista(capacidad);

    for(int i{0}; i < capacidad; i++){
        std::cout << "Ingrese numero " << i + 1 << ": ";
        std::cin >> numero;

        lista.agregar(numero);
    }

    lista.imprimir();

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Promedio: " << lista.promedio();

    return 0;
}

