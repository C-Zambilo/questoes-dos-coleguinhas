#include<iostream>

int main () {
	
	// Crie um algoritmo que converta Metros para Polegadas, Pes, Jardas, Milhas, Centimetros e Quilometros.
	
	
	// funcoes referentes aos tipos de medida
	float metros = 0;
	float po = 0;
	float pe = 0;
	float ja = 0;
	float mi = 0;
	float cm = 0;
	float km = 0;
	
	//contato com o usuario
	
	std::cout <<"Digite uma medida em metros: ";
	std::cin>> metros;
	
	//conversao de medidas
	
	po = metros * 39.37;
	pe = metros * 3.281;
	ja = metros * 1.094;
	mi = metros / 1609;
	cm = metros * 100;
	km = metros / 1000;
	
	// resultados
	
	std::cout <<"\nPolegadas: "<<po;
	std::cout <<"\nPes: "<<pe;
	std::cout <<"\nJardas: "<<ja;
	std::cout <<"\nMilhas: "<<mi;
	std::cout <<"\nCentimetros: "<<cm;
	std::cout <<"\nQuilometros: "<<km;
	
	
	return 0;
	
}
