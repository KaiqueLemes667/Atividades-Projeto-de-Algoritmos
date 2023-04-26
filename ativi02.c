#include <stdio.h> // biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause

int main(){ // função principal do programa

float raio, area, pi; // declaração das variaveis do tipo float


printf("Digite o raio do circulo: "); // solicita ao usuario o raio do circulo
	scanf("%f", &raio); // aramazena o valor digitado pelo usuario na variável raio
	
	pi = raio * raio; // a variável pi recebe resultado da operação
	area = pi * 3.14; // a variável area recebe resultado da operação
	
	printf("A area do circulo e: %.2f\n", area); // imprime o conteudo da variável area 
	 
	 
	 system("pause"); // pausa o programa
	
}
