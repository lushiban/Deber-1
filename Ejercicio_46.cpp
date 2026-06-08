#include <iostream>

int main(){
    int n{0}, numero{0}, contador[11]{0};

    std::cout << "Ingrese la cantidad de numeros: ";
    std::cin >> n;

    int *arreglo = new int[n];

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese numero " << i + 1 << " entre 1 y 10: ";
        std::cin >> arreglo[i];

        numero = arreglo[i];
        contador[numero]++;
    }

    for(int i{1}; i <= 10; i++){
        if(contador[i] > 0){
            std::cout << "Valor " << i << ": " << contador[i] << " veces\n";
        }
    }

    delete[] arreglo;

    return 0;
}