#include  <stdio.h>   // biblioteca para E/S
#include  <stdlib.h>  // biblioteca para utilizar o system pausa
 
 
  int  main (){ //   função principal do programa
  	
  	int n1,n2,soma; // declaração das variáveis inteiras   
  	
  		printf ( " Informe um primeiro numero: " ); // solicita o primeiro número ao usuário
  		scanf ( "%d" ,&n1); // gravação do primeiro número na variável "n1"
  	
  		printf ( "Informe um segundo numero: " ); // solicita o segundo número ao usuário
  		scanf ( "%d" ,&n2); // gravação do segundo na variável "n2"
  		
  		soma=n1+n2; // ndo atribui valor á variável "soma" com a adição das variáveis "n1" + "n2"
  		
  		printf ( " A soma dos dois numeros e: %d \n " ,soma); // é impresso na tela o resultado da soma dos números informados
  	
  	system ( " pause " ); // pausa do programa
  	
  }
