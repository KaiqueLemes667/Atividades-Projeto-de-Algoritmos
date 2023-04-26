#include <stdio.h> //  biblioteca para E/S
#include <stdlib.h> //  biblioteca para utilizar o system pause
 
 
  int main (){ // chamando a função principal
  	
  	int n1; // declaração da variável "n1" do tipo inteiro
  	
  	printf("Informe o numero: "); // solicita ao usuário um numero
  		scanf("%d",&n1); // o número recebido do usuário é gravado na variável "n1"
  		
  		if(n1 %2 == 0){ // equação para identificar se o número é par ou impar, utilizando da divisão do número informado pelo usuário  por 2
  			
  			printf("o numero e par\n"); // se o resto da  divisão for 0, o programa imprime ao usuário que esse número é par
  			
  		}
  			else
  			printf("o numero e impar\n"); // se o resto da divisão for diferente de 0, o programa imprime ao usuário que esse número é impar
  		
		  
		  system("pause"); // pausa do programa  
	}
