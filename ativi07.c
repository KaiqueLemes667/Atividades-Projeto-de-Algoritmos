#include <stdio.h> //  biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause

int main (){ // chamando a função principal
	
	int idade; // declarão da variáverl inteira "idade"
	
	printf("informe sua idade: "); // é solicitado ao usuário sua idade
	scanf("%d", &idade); // o valor recebido é gravado na variável "idade"
	
		if(idade>=18){ // o if identifica se o número recebido é maior ou igual a 18
		printf("Voce e maior de idade \n"); //se o valor da variável for maior ou igual a 18, é impresso na tela que o usuário é maior de idade 
	}
		else
		printf("Voce e menor de idade \n"); //se o valor da variável for menor que 18, é impresso na tela que o usuário é menor de idade 
		
		system("pause"); //pausa do programa
	
	
}
