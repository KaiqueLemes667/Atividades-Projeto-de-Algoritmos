#include <stdio.h> //  biblioteca para E/S
#include <stdlib.h> //  biblioteca para utilizar o system pause
 
 
  int main (){ // chamando a fun��o principal
  	
  	int n1; // declara��o da vari�vel "n1" do tipo inteiro
  	
  	printf("Informe o numero: "); // solicita ao usu�rio um numero
  		scanf("%d",&n1); // o n�mero recebido do usu�rio � gravado na vari�vel "n1"
  		
  		if(n1 %2 == 0){ // equa��o para identificar se o n�mero � par ou impar, utilizando da divis�o do n�mero informado pelo usu�rio  por 2
  			
  			printf("o numero e par\n"); // se o resto da  divis�o for 0, o programa imprime ao usu�rio que esse n�mero � par
  			
  		}
  			else
  			printf("o numero e impar\n"); // se o resto da divis�o for diferente de 0, o programa imprime ao usu�rio que esse n�mero � impar
  		
		  
		  system("pause"); // pausa do programa  
	}
