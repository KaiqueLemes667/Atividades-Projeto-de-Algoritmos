#include <stdio.h> //  biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause

int main(){ // chamando a fun��o principal
	
	float n; // declar��o da vari�vel float
	
	printf("Digite um numero: "); // � solicitado usu�rio um n�mero
	scanf("%f", &n); // o n�mero recebido do usu�rio � gravado na vari�vel "n"
	
	printf("o numero inteiro e %d\n",(int)n);  // � imprimido pro usu�rio a convers�o do n�mero real para apenas sua parte inteira 
	
	system("pause"); // pausa do programa
	
}
	
	
