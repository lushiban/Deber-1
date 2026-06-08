#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

//prototipos
void guardarNotas(int n);
double calcularPromedioArchivo();
void guardarPromedio(double promedio);

//main
int main(){
    int n{0};
    double promedio{0};

    std::cout << "Ingrese la cantidad de estudiantes: ";
    std::cin >> n;

    guardarNotas(n);

    std::cout << "Datos guardados en \"notas.txt\".\n";

    promedio = calcularPromedioArchivo();

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Promedio del grupo: " << promedio << "\n";

    guardarPromedio(promedio);

    std::cout << "Promedio guardado en el archivo.";

    return 0;
}

//resto de funciones
void guardarNotas(int n){
    std::ofstream archivo("notas.txt");
    std::string nombre{};
    double nota{0};

    if(!archivo.is_open()){
        std::cout << "Error: no se pudo crear el archivo.";
        return;
    }

    for(int i{0}; i < n; i++){
        std::cout << "Ingrese nombre del estudiante " << i + 1 << ": ";
        std::cin >> nombre;

        std::cout << "Ingrese nota de " << nombre << ": ";
        std::cin >> nota;

        archivo << nombre << " " << nota << "\n";
    }

    archivo.close();
}

double calcularPromedioArchivo(){
    std::ifstream archivo("notas.txt");
    std::string nombre{};
    double nota{0}, suma{0};
    int contador{0};

    if(!archivo.is_open()){
        std::cout << "Error: no se pudo abrir el archivo.";
        return 0;
    }

    while(archivo >> nombre >> nota){
        suma += nota;
        contador++;
    }

    archivo.close();

    if(contador == 0){
        return 0;
    }

    return suma / contador;
}

void guardarPromedio(double promedio){
    std::ofstream archivo("notas.txt", std::ios::app);

    if(!archivo.is_open()){
        std::cout << "Error: no se pudo abrir el archivo.";
        return;
    }

    archivo << std::fixed << std::setprecision(2);
    archivo << "Promedio " << promedio << "\n";

    archivo.close();
}