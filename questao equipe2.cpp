#include<iostream>

int main () {
	
	// Jogo da adivinhacao.
	
	int numero = 0;
	
	// usuario escolhe um numero
	
	std::cout<< "Adivinhe o numero correto!\n";
	std::cout<< "\nDigite um numero inteiro: ";
	std::cin>> numero;
	
	
	// condicional para validar se esta entre 1 e 10 ou nao
	
	if (numero < 1) {
		std::cout<<"Voce errou!";
		
	} else if (numero>10) {
	std::cout<<"Voce errou!";
	
	}else {
		std::cout<< "Voce acertou! Parabens <3 ";
	}
	
	
	return 0;
	
}
