#include  <stdio.h>   // biblioteca para E/S
#include  <stdlib.h>  // biblioteca para utilizar o system pausa
 
 
  int  main (){ //   fun��o principal do programa
  	
  	int n1,n2,soma; // declara��o das vari�veis inteiras   
  	
  		printf ( " Informe um primeiro numero: " ); // solicita o primeiro n�mero ao usu�rio
  		scanf ( "%d" ,&n1); // grava��o do primeiro n�mero na vari�vel "n1"
  	
  		printf ( "Informe um segundo numero: " ); // solicita o segundo n�mero ao usu�rio
  		scanf ( "%d" ,&n2); // grava��o do segundo na vari�vel "n2"
  		
  		soma=n1+n2; // ndo atribui valor � vari�vel "soma" com a adi��o das vari�veis "n1" + "n2"
  		
  		printf ( " A soma dos dois numeros e: %d \n " ,soma); // � impresso na tela o resultado da soma dos n�meros informados
  	
  	system ( " pause " ); // pausa do programa
  	
  }
