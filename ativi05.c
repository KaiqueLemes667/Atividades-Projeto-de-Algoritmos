#include <stdio.h> // biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause
 
 
  int main (){ // chamando a fun��o principal
  	
  	int n, ant, su; // declara��o das vari�veris inteiras 
  	
  	printf("Informe um  numero: "); // solicita ao usu�rio um n�mero
  		scanf("%d",&n); // o n�mero recebido do usu�rio � gravado na vari�vel "n"
  		
  		ant = n-1; // � feita a subtra��o do n�mero recebido  por 1 e grava o resultado na vari�vel "ant"
  		su = n+1; // � feita a adi��o do n�mero recebido  por 1 e grava o resultado na vari�vel "su"
  		
  		printf("O antecessor e: %d\n", ant); // � impresso na tela do usu�rio o antecesor do numero informado
  		printf("O sucessor e: %d\n", su); // � impresso na tela do usu�rio o sucessor do numero informado
  		
  		system("pause"); //pausa do programa
  		
  	}
