#include <stdio.h> // biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause

int main(){ // fun��o principal do programa

float raio, area, pi; // declara��o das variaveis do tipo float


printf("Digite o raio do circulo: "); // solicita ao usuario o raio do circulo
	scanf("%f", &raio); // aramazena o valor digitado pelo usuario na vari�vel raio
	
	pi = raio * raio; // a vari�vel pi recebe resultado da opera��o
	area = pi * 3.14; // a vari�vel area recebe resultado da opera��o
	
	printf("A area do circulo e: %.2f\n", area); // imprime o conteudo da vari�vel area 
	 
	 
	 system("pause"); // pausa�o�programa
	
}
