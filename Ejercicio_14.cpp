#include <iostream>

int main(){
    int n{0};
    int i{1};

    std::cout << "Ingrese hasta que numero quiere contar: ";
    std::cin >> n;

    while(i <= n){
        std::cout << i << " ";
        i++;
    }

    return 0;
}