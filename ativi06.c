#include <stdio.h> //  biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause

int main(){ // chamando a função principal
	
	float n; // declarção da variável float
	
	printf("Digite um numero: "); // é solicitado usuário um número
	scanf("%f", &n); // o número recebido do usuário é gravado na variável "n"
	
	printf("o numero inteiro e %d\n",(int)n);  // é imprimido pro usuário a conversão do número real para apenas sua parte inteira 
	
	system("pause"); // pausa do programa
	
}
	
	
