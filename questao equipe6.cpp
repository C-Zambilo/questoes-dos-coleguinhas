#include<iostream>

int main (){
	
	// divisores 
	
    int numero = 0;
    int primeiro_divisivel = 0;
    int segundo_divisivel = 0;
    
    // usuario insere um numero e seus divisores
    
    std::cout << "Digite o numero: ";
    std::cin >> numero;
    std::cout << "Digite o primeiro divisivel: ";
    std::cin >> primeiro_divisivel;
    std::cout << "Digite o segundo divisivel: ";
    std::cin >> segundo_divisivel;
    
    // o programa verifica se esta correto ou não
    
    if(numero % primeiro_divisivel == 0 && numero % segundo_divisivel == 0){
        std::cout << "O numero " << numero << " e divisivel por: " << primeiro_divisivel << " e por " << segundo_divisivel;
    }else{
        std::cout << "Falha na operacao";
    }
}