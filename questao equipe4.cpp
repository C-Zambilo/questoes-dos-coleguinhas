#include<iostream>

int main () {
	
	// Monte um algoritmo que encontre o valor de aceleração adquirida pelo corpo
	
	int massa =0;
	int fr= 0;
	int a= 0;
	
	// usuario insere os dados
	
	std::cout<<"Calculo de aceleracao\n";
	std::cout<<"Insira o valor da massa: ";
	std::cin>> massa;
	std::cout<<"Insira o valor da forca resultante: ";
	std::cin>> fr;
	
	//calculo da aceleração e resultado
	
	a = fr / massa;
	
	
	std::cout<< "Valor da aceleracao: " <<a;
	
	return 0;
}