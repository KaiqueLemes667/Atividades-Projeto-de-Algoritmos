#include <stdio.h> //  biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause

int main (){ // chamada da fun��o principal
	
	char nome[30]; // declara��o da vari�vel char "nome" e limita��o de 30 caracteres na sua grava��o
	int idade; // declara��o da vari�vel "idade" do tipo inteiro
	
	printf ("Informe seu nome: "); // solicita ao usu�rio seu nome
	scanf("%s", &nome); // � feita a grava��o do nome recebido do usu�rio a vari�vel "nome"
	
	printf ("Informe sua idade: "); // solicita ao usu�rio sua idade
	scanf("%d", &idade); // � feita a grava��o da idade recebida do usu�rio a vari�vel "idade"
	
	printf("opa %s, vc tem %d anos e seja bem vindo(a)\n", nome, idade); // � impresso na tela do usu�rio uma mensagem de sauda��o com seu nome e sua idade;
	
	system("pause"); // pausa do programa
	
}
