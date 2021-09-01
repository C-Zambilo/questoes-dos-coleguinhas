#include<iostream>

int main ()
	{
// Programa Para Calcular Imposto Sobre Salario.


	int salario = 0;
	float imposto =0;
	
	//inserção do salario

	std::cout <<"Insira o valor do salario: ";
	std::cin>> salario;
	
	//condicional para calcular o imposto

	if (salario < 1900)
		{
		imposto= 0;

		}
	else if (salario > 1900 && salario < 2499)
		{
		imposto= salario *0.02;

		}
	else if (salario > 2500 && salario < 3699)
		{
		imposto= salario *0.03;

		}
	else if (salario > 3700 && salario < 4999)
		{
		imposto= salario *0.045;

		}
	else if (salario >= 5000)
		{
		imposto=salario *0.06;
		}

// resultado do salario + imposto

	std::cout <<"\nValor do imposto: R$"<<imposto;

	return 0;

	}
