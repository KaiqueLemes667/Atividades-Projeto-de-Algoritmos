#include <stdio.h> // biblioteca de E/S
#include <stdlib.h> // biblioteca para utilizar o system pause

int main (){ //  fun��o principal do programa
	
	float celsius, conv; // declar��o das vari�veis do tipo float
	
	printf("digite a temperatura em Celsius: "); // � solicitado ao usu�rio o valor da temperatura em celsius
	scanf("%f", &celsius); // o valor recebido do usu�rio � gravado na vari�vel "celsius"
	
	conv = (celsius * 1.8) + 32; // � feita a equa��o de convers�o, ap�s feita grava o resultado na vari�vel conv
	
	printf ("a temperatura em  Fahrenheit e: %.2f \n", conv); // � impresso na tela do usu�rio o resultado da convers�o em Fahrenheit
	
	system("pause"); //pausa do programa
	
}
