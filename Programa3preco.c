//* Biblotecas a serem utilizadas *//

#include <stdio.h>

//* Variaveis globais *//
int cp;
float valor,valorfinal;


//* Corpo do Programa *// 

int main ()

{

//* Cabeçalho do programa *//
printf ("\t\t\t\t\tSistema de Cobranca\n");
printf("\n Codigo da condicao de pagamento\t");
printf("Condicao de pagamento\n");
printf("------------------------------------\t");
printf("------------------------------------\n");
printf ("1\t\t\t\t\t");
printf ("A vista em dinheiro ou cheque, com 10 por cento de desconto\n");
printf ("2\t\t\t\t\t");
printf ("A vista com cartao de credito, com 5 por cento de desconto\n");
printf ("3\t\t\t\t\t");
printf ("Em 2 vezes, preco normal de etiqueta sem juros \n");
printf ("4\t\t\t\t\t");
printf ("Em 3 vezes, preço de etiqueta com acrescimo de 10 por cento \n");

//* Entrada das variavéis *//

printf("\n\nCondicao de pagamento: ");
    scanf("%d", &cp); 
    printf("Preço da etiqueta: ");
    scanf("%f", &valor); 


//* Calculos *//

switch (cp)
{
	
 case 1:
 	
    valorfinal = valor - (valor * 0.10);
 	
 	printf ("\nValor a pagar:%.2f", valorfinal);
 	
 	break;
 	
case 2:
 	
 	valorfinal = valor - (valor * 0.05);
	 
	printf ("\nValor a pagar:%.2f", valorfinal);	
 	
 	break;
 	
case 3:
 	
 	printf ("\nValor a pagar:%.2f", valor);
 	
 	break;
 	
case 4:
 	
	valorfinal = valor + (valor * 0.10);
 	
 	printf ("\nValor a pagar:%.2f", valorfinal );
 	break;
 	
default:
    printf("\nOpcao invalida.\n");
 	
}
	
return 0;
}


