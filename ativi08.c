#include <stdio.h> // biblioteca de E/S
#include <stdlib.h> // biblioteca para utilizar o system pause

int main (){ //  função principal do programa
	
	float celsius, conv; // declarção das variáveis do tipo float
	
	printf("digite a temperatura em Celsius: "); // é solicitado ao usuário o valor da temperatura em celsius
	scanf("%f", &celsius); // o valor recebido do usuário é gravado na variável "celsius"
	
	conv = (celsius * 1.8) + 32; // é feita a equação de conversão, após feita grava o resultado na variável conv
	
	printf ("a temperatura em  Fahrenheit e: %.2f \n", conv); // é impresso na tela do usuário o resultado da conversão em Fahrenheit
	
	system("pause"); //pausa do programa
	
}
