#include <iostream>
#include <iomanip>
#include <string>

//clases
class Producto{
private:
    std::string nombre;
    double precio;

public:
    Producto() : nombre(""), precio(0){}

    Producto(std::string n, double p) : nombre(n), precio(p){}

    void setDatos(std::string n, double p){
        nombre = n;
        precio = p;
    }

    std::string getNombre(){
        return nombre;
    }

    double getPrecio(){
        return precio;
    }
};

//main
int main(){
    int n{0}, indice_caro{0}, indice_barato{0};
    std::string nombre{};
    double precio{0};

    std::cout << "Ingrese la cantidad de productos: ";
    std::cin >> n;

    Producto *productos = new Producto[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese nombre del producto " << i + 1 << ": ";
        std::cin >> nombre;

        std::cout << "Ingrese precio de " << nombre << ": ";
        std::cin >> precio;

        productos[i].setDatos(nombre, precio);
    }

    for(int i{1}; i < n; i++){
        if(productos[i].getPrecio() > productos[indice_caro].getPrecio()){
            indice_caro = i;
        }

        if(productos[i].getPrecio() < productos[indice_barato].getPrecio()){
            indice_barato = i;
        }
    }

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Mas caro: " << productos[indice_caro].getNombre();
    std::cout << " ($" << productos[indice_caro].getPrecio() << ")\n";

    std::cout << "Mas barato: " << productos[indice_barato].getNombre();
    std::cout << " ($" << productos[indice_barato].getPrecio() << ")";

    delete[] productos;

    return 0;
}

