//* Biblotecas a serem utilizadas *//

#include <stdio.h>

//* Variaveis globais *//

int cdg;

//* Corpo do Programa *// 

int main ()

{
	
//* Cabeçalho do programa *//

printf ("\t\t\t\t\t\tTipos de produto\n\n");
printf ("---------\t");
printf ("-------------------\n");
printf ("Codigo\t\t");
printf ("Classificacao");
printf ("\n---------\t");
printf ("-------------------\n");
printf ("1\t\t");
printf ("Alimento nao perecivel\n");
printf ("2,3 ou 4\t");
printf ("Alimento perecivel\n");
printf ("5 ou 6\t\t");
printf ("Vestuario\n");
printf ("7\t\t");
printf ("Higiene Pessoal\n");
printf ("8,9 ou 10\t");
printf ("Utensilios domesticos\n");
printf ("Qualquer outro\t");
printf ("Classificacao desconhecida\n");


//* Entrada das variavéis *//


printf ("\n\n\nDigite o codigo do produto:");
scanf ("%d", &cdg);

//* Validação dos dados *//	
	
switch (cdg)

{
case 1: 

printf ("Alimento nao perecivel");

break;

case 2: case 3: case 4:

printf ("Alimento perecivel");

break;

case 5: case 6: 

printf ("Vestuario");

break;

case 7:

printf ("Higiene pessoal");

break;

case 8: case 9: case 10:

printf ("Utensilios domesticos");

break;

default:

printf ("Classificacao desconhecida");
}

return 0;
}





