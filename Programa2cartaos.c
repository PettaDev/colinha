//* Biblotecas a serem utilizadas *//

#include <stdio.h>

//* Variaveis globais *//

int dgt;

//* Corpo do Programa *// 

int main ()

{
	
//* Cabeçalho do programa *//

printf ("\t\t\t\t Identificador de bandeira do cartao\n\n");
printf ("Para a identicacao da bandeira do seu cartao será necessário inserir o primeiro e segundo digito do cartao\n\n");

printf ("---------------------------------------------------\n");
printf ("\tTESTANDO CARTAO DE CREDITO");
printf ("\n---------------------------------------------------\n\n");

//* Entrada do cartao *//

printf ("Digite os dois primeiros digitos do cartao:\n");

scanf ("%d", &dgt);

//* Validação dos doados *//

switch (dgt)

{
	
case 51: case 52: case 53: case 54: case 55:
	
printf ("Cartao mastercard");

break;

case 34: case 37:

printf ("Cartao American Express");

case 40: case 41: case 42: case 43: case 44: case 45: case 46: case 47: case 48: case 49:   

printf ("Cartao Visa");

break;

case 20:case 21:case 22:case 23:case 24:case 25:case 26:case 27:case 28:case 29:

printf ("Cartao Mastercard");

break;

case 60:case 61:case 62:case 63:case 64:case 65:case 66:case 67:case 68:case 69:
	
printf ("Carato Discover");

break;	

default:

printf ("Cartao nao identificado");
}

return 0;


}
