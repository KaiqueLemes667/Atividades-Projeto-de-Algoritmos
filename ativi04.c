#include <stdio.h> //  biblioteca para E/S
#include <stdlib.h> // biblioteca para utilizar o system pause
 
 
  int main (){ // chamando a fun��o principal
  	
  	float n1 ,n2 ,n3 , media; // declara��o das vari�veis do tipo float
  	
  	printf("Informe um primeiro numero: "); // solicita ao usu�rio o primeiro n�mero
  		scanf("%f",&n1); // o n�mero solicitado � gravado na vari�vel "n1"
  		
  		printf("Informe um segundo numero: "); // solicita ao usu�rio o segundo n�mero
  		scanf("%f",&n2); // o n�mero solicitado � gravado na vari�vel "n2"
  		
  		printf("Informe um terceiro numero: "); // solicita ao usu�rio o terceiro n�mero
  		scanf("%f",&n3); // o n�mero solicitado � gravado na vari�vel "n3"
  		
  		media=(n1+n2+n3)/2; // a soma dos tr�s n�meros solicitados ao usu�rio e  dividido por 2 e  gravado na vari�vel "media"
  		
  		printf("a media aritmetica e: %.2f\n", media); // imprime  o valor da vari�vel "media"
  		
  		system("pause"); //pausa do programa
  		
  	}
