#include <stdio.h> //  biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause

int main (){ // chamando a fun��o principal
	
	int idade; // declar�o da vari�verl inteira "idade"
	
	printf("informe sua idade: "); // � solicitado ao usu�rio sua idade
	scanf("%d", &idade); // o valor recebido � gravado na vari�vel "idade"
	
		if(idade>=18){ // o if identifica se o n�mero recebido � maior ou igual a 18
		printf("Voce e maior de idade \n"); //se o valor da vari�vel for maior ou igual a 18, � impresso na tela que o usu�rio � maior de idade 
	}
		else
		printf("Voce e menor de idade \n"); //se o valor da vari�vel for menor que 18, � impresso na tela que o usu�rio � menor de idade 
		
		system("pause"); //pausa do programa
	
	
}
