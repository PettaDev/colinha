//* Bibliotecas a serem utilizadas *//

#include <stdio.h>

//*Variaveis Globais *//

char primeiro,segundo;

//* Corpo do programa *//

int main ()

{
	
	// Coleta de dados 
	
	printf ("Identificacao de numero do cartao/n");
	
	printf ("\nPara realiza a identidicacão do seu cartao insira o primeiro digito:\n");
	
	primeiro = getche ();
	
		printf ("\nPara realiza a identidicacao do seu cartao insira o segundo digito:\n");
	
	segundo = getche ();
	
	// Validação de dados 
	
	if (primeiro == '4' )
	
	printf ("\nCartao Visa\n");
	
	else if (primeiro == '3' && segundo == '4' || primeiro == '3' && segundo == '7')
	
	printf ("\nCartao American Express\n");
	
	else if (primeiro == '6' )
	
	printf ("\nDiscover\n");
	
	else if ( primeiro == '5' || primeiro == '2' && segundo == '1' && segundo == '2' && segundo == '3' && segundo == '4' && segundo == '5' )
	
	printf ("\nCartao Mastercard\n");
	
	
	else 
	{
		printf ("\nCarto de credito nao identificado\n");
	 } 
	
	return 0;
	
	
	
}
