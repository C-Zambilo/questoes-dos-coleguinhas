#include<iostream>

int main () {
	
	int opcao=0;
	int peso =0;
	
	std::cout<<"Calculadora de calorias";
	
	// opção para o usuario
	
	std::cout<<"Escolha uma das opcoes abaixo\n"<< "(1) Perder peso\n" << "(2) Manter o peso\n" << "(3) Ganhar peso\n";
	std::cin>> opcao;
	
	std::cout<<"Insira seu peso em kg: ";
	std::cin>> peso;
	
	// calculo feito de acordo com a escolha do usuario 
	
	if(opcao < 1 || opcao > 3){
        std::cout << "Opcao invalida!";
        return 0;
    }else if(opcao == 1){
        std::cout << "Os valores minimo e maximo de calorias sao: " << peso * 20 << " e " << peso * 25;
    }else if (opcao == 2){
        std::cout << "Os valores minimo e maximo de calorias sao: " << peso * 25 << " e " << peso * 30;
    }else if (opcao == 3){
        std::cout << "Os valores minimo e maximo de calorias sao: " << peso * 30 << " e " << peso * 35;
    }
	
	
	
	return 0;
}