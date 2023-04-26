#include <stdio.h> //  biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause
 
 
  int main (){ // chamando a função principal
  	
  	float n1 ,n2 ,n3 , media; // declaração das variáveis do tipo float
  	
  	printf("Informe um primeiro numero: "); // solicita ao usuário o primeiro número
  		scanf("%f",&n1); // o número solicitado é gravado na variável "n1"
  		
  		printf("Informe um segundo numero: "); // solicita ao usuário o segundo número
  		scanf("%f",&n2); // o número solicitado é gravado na variável "n2"
  		
  		printf("Informe um terceiro numero: "); // solicita ao usuário o terceiro número
  		scanf("%f",&n3); // o número solicitado é gravado na variável "n3"
  		
  		media=(n1+n2+n3)/2; // a soma dos três números solicitados ao usuário e  dividido por 2 e  gravado na variável "media"
  		
  		printf("a media aritmetica e: %.2f\n", media); // imprime  o valor da variável "media"
  		
  		system("pause"); //pausa do programa
  		
  	}
