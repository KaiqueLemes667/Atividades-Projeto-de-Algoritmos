#include <stdio.h> //  biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause

int main(){ // função principal do programa

int n, resultado; // declaração das variaveis do tipo inteiro

int i; // declaração das variaveis do tipo inteiro

printf("Digite um numero: "); // solicito ao usuario um numero 
	scanf("%d", &n); // o valor e armazenado na variável n
	
	for(i = 1; i<=10; i++){ //laço de repetição para imprimir a tabuada do valor informado do 1 ao 10 
		
		resultado = n * i; //  "resultado" recebe o valor das operações 
		 
		 printf("\n%d x %d = %d\n", n, i,resultado); // imprime a tabuada do numero informado
	}
	 
	 system("pause"); // pausa o programa
	 
	
}
