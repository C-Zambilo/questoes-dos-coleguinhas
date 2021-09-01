#include<iostream>
#include<math.h>

int main (){
	
	// Equação de 2 grau
	
	// variaveis
	
    float a = 0;
    float b = 0;
    float c = 0;
    float x1 = 0;
    float x2 = 0;
    
    // entrada de valores
    
    std::cout<< "Calculadora das equacoes de 2 grau\n";

    std::cout << "\nDigite o valor de A: ";
    std::cin >> a;
    std::cout << "Digite o valor de B: ";
    std::cin >> b;
    std::cout << "Digite o valor de C: ";
    std::cin >> c;
    
    // equação matematica 

    float delta = ((b*b) - (4*(a*c)));
    x1 = (-b + sqrt(delta)) / (2*a);
     x2 = (-b - sqrt(delta)) / (2*a);

// validação e resultado

     if(delta < 0){
         std::cout << "A equacao nao e real\n Delta: " << delta;
     }
     else{
         std::cout << "x1: " << x1 << "\n";
         std::cout << "x2: " << x2;
     }
     
     return 0;
}