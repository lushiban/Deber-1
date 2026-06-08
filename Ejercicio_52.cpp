// palindromo o no
#include <iostream>
#include <string>
#include <cctype>

bool EsPalindromo(const std::string& palabra) {
    int inicio{0}, fin{static_cast<int>(palabra.size()) - 1};

    while (inicio < fin) {
        char izquierda{static_cast<char>(std::tolower(palabra[inicio]))};
        char derecha{static_cast<char>(std::tolower(palabra[fin]))};

        if (izquierda != derecha) {
            return false;
        }

        inicio++;
        fin--;
    }

    return true;
}

int main() {
    std::string palabra{};

    std::cout << "Ingrese una palabra: ";
    std::cin >> palabra;

    if (EsPalindromo(palabra)) {
        std::cout << "\"" << palabra << "\" es palindromo.\n";
    } else {
        std::cout << "\"" << palabra << "\" no es palindromo.\n";
    }

    return 0;
}