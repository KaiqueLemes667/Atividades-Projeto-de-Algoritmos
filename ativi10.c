#include <stdio.h> //  biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause

int main (){ // chamada da função principal
	
	char nome[30]; // declaração da variável char "nome" e limitação de 30 caracteres na sua gravação
	int idade; // declaração da variável "idade" do tipo inteiro
	
	printf ("Informe seu nome: "); // solicita ao usuário seu nome
	scanf("%s", &nome); // é feita a gravação do nome recebido do usuário a variável "nome"
	
	printf ("Informe sua idade: "); // solicita ao usuário sua idade
	scanf("%d", &idade); // é feita a gravação da idade recebida do usuário a variável "idade"
	
	printf("opa %s, vc tem %d anos e seja bem vindo(a)\n", nome, idade); // é impresso na tela do usuário uma mensagem de saudação com seu nome e sua idade;
	
	system("pause"); // pausa do programa
	
}
