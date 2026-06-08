#include <iostream>
using namespace std;

//crear una funcion que reciba un numero y ver si es numero primo(recibe entero)

void numero_primo(int n){
	int contador{0};
	for(int i{1}; i<=n; i++){
		if((n%i) == 0){contador++;}
	}
	if(contador == 2){
		cout<<"\nEs primo";
	}else{cout<<"\nNo es primo";}
}

int main() {
	int numero;
	cout<<"Ingrese el numero: ";
	cin>>numero;
	numero_primo(numero);
	
    return 0;
}