#include <iostream>
#include <iomanip>

//clasees
class Vector2D{
private:
    double x, y;

public:
    Vector2D(double x_val, double y_val) : x(x_val), y(y_val){}

    Vector2D operator+(const Vector2D &otro){
        return Vector2D(x + otro.x, y + otro.y);
    }

    double operator*(const Vector2D &otro){
        return x * otro.x + y * otro.y;
    }

    friend std::ostream& operator<<(std::ostream &out, const Vector2D &v);
};

//main
int main(){
    double x1{0}, y1{0}, x2{0}, y2{0};

    std::cout << "Ingrese x del vector 1: ";
    std::cin >> x1;

    std::cout << "Ingrese y del vector 1: ";
    std::cin >> y1;

    std::cout << "Ingrese x del vector 2: ";
    std::cin >> x2;

    std::cout << "Ingrese y del vector 2: ";
    std::cin >> y2;

    Vector2D v1(x1, y1);
    Vector2D v2(x2, y2);
    Vector2D suma = v1 + v2;
    double producto{v1 * v2};

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "v1 = " << v1 << "\n";
    std::cout << "v2 = " << v2 << "\n";
    std::cout << "v1 + v2 = " << suma << "\n";
    std::cout << "v1 * v2 = " << producto;

    return 0;
}

//funcion
std::ostream& operator<<(std::ostream &out, const Vector2D &v){
    out << std::fixed << std::setprecision(2);
    out << "(" << v.x << ", " << v.y << ")";

    return out;
}