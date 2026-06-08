 #include <iostream>
 
 int main(){
 	int n{0};
 	
 	std::cout<<"Ingrese un numero: ";
 	std::cin>>n;
 	if(n>0){
 		std::cout<<"El numero "<<n<<" es positivo";
	 }else{
	 	if(n<0){
	 		std::cout<<"El numero "<<n<<" es negativo";
		 }
		 else{std::cout<<"El numero es 0"; }
	 }
 	
 }