#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

//prototipos
void guardarEstudiantes(int n);
void leerEstudiantes();

//main ---------------------------------------------------------------
int main(){
    int n{0};

    std::cout << "Ingrese la cantidad de estudiantes: ";
    std::cin >> n;

    guardarEstudiantes(n);

    std::cout << "Guardados " << n << " registros en \"estudiantes.txt\".\n";
    std::cout << "Leyendo archivo:\n";

    leerEstudiantes();

    return 0;
}
 
//resto de funciones---------------------------------------------------------------
void guardarEstudiantes(int n){
    std::ofstream archivo("estudiantes.txt");
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

void leerEstudiantes(){
    std::ifstream archivo("estudiantes.txt");
    std::string nombre{};
    double nota{0};

    if(!archivo.is_open()){
        std::cout << "Error: no se pudo abrir el archivo.";
        return;
    }

    std::cout << std::fixed << std::setprecision(2);

    while(archivo >> nombre >> nota){
        std::cout << nombre << " - " << nota << "\n";
    }

    archivo.close();
}