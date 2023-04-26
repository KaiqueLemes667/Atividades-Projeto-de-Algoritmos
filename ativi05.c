#include <stdio.h> // biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause
 
 
  int main (){ // chamando a função principal
  	
  	int n, ant, su; // declaração das variáveris inteiras 
  	
  	printf("Informe um  numero: "); // solicita ao usuário um número
  		scanf("%d",&n); // o número recebido do usuário é gravado na variável "n"
  		
  		ant = n-1; // é feita a subtração do número recebido  por 1 e grava o resultado na variável "ant"
  		su = n+1; // é feita a adição do número recebido  por 1 e grava o resultado na variável "su"
  		
  		printf("O antecessor e: %d\n", ant); // é impresso na tela do usuário o antecesor do numero informado
  		printf("O sucessor e: %d\n", su); // é impresso na tela do usuário o sucessor do numero informado
  		
  		system("pause"); //pausa do programa
  		
  	}
