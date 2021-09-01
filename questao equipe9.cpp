#include<iostream>
#include<stdio.h>

int main () {
    char nome[100];
    int salario;

//salario e cargo

// usuario insere os dados

    std:: cout << "Digite seu nome:   ";
    std:: cin >> nome;
    std:: cout  << "\n qual a pretensao salarial? R$ ";
    std:: cin >> salario;

// recebe a informação de aprovação (ou não), cargo e salario

    if (salario <=1300) {
        std:: cout << "Parabens, " << nome << " voce esta apto a vaga de auxiliar de producao com salario de R$ " <<  salario;
        
        } else if (salario > 1300 && salario <=2500) {
        std:: cout << "Parabens, "<<  nome <<  " voce esta apto a vaga para chefe de equipe com salario de R$ " <<  salario;
        
            }else  if (salario  > 2500){
            	
        std:: cout <<    nome <<  ", infelizmente seu perfil nao corresponde com a empresa";
        
        }


    return 0;
    }
