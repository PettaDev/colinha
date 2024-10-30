# colinha


- Ternário
```
#include <stdio.h>
#include <conio.h>

float    a, b ;

int main ()
{

   printf ("\nInforme 2 números: ");
   fflush (stdin);
   scanf  ("%f %f", &a, &b );

   printf ("\nMaior nro.: %0.1f" , a>b ? a : b );

   getch();

   return 0;
}
```
```
#include <stdio.h>
#include <conio.h>
float    a, b, c;
int main ()
{
   printf ("\nInforme três números: ");
   fflush (stdin);
   scanf  ("%f %f %f", &a, &b, &c);
   printf ("\n %s" ,  !( a<b+c && b<a+c && c<a+b )  ? "\nNão é um triângulo!"  : ("\n É um triângulo %s", (a==b && b==c) ? "equilátero" : ( a==b || a==c || b==c ) ?  "isósceles"  : "escaleno"));

   getch();
   return 0;
}
```

- Switch Case
```
/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* Variáveis glogais */
char  opc;

/* Corpo do programa */
int  main ()
{
	MARCADOR:
	/* Limpa a tela */
	system ("color A0");
	system ("cls"); 
	/* Monta o menu de possibilidades */
	printf ("Estados civis esperados: ");
	printf ("\n     c = casado        ");
	printf ("\n     s = solteiro      ");
	printf ("\n     d = divorciado    ");
	printf ("\n     v = viuvo         ");
	printf ("\n     o = outros        ");
	/* Solicitar a opção desejada */
	printf ("\n\nDigite sua escolha: ");
	fflush (stdin);
	opc = getche();
	/* Analisar qual foi a opçao escolhida */
	switch ( opc )
	{
		case 'c': 
		case 'C':
		{
			system ("color 10");
		    printf("\n\nCASADO");	
		}	  
		break;
		case 's': 
		case 'S': 		
		{
			system ("color 30");
		    printf("\n\nSOLTEIRO");	
		}	  
		break;

		case 'd': case 'D': 
		{
			system ("color 40");
			printf("\n\nDIVORCIADO");
		} 
		break;
		case 'v': case 'V': 
		{
			system ("color 06");
			printf("\n\nVIUVO");
		} 	  
		break;
		case 'o': case 'O': 
		{
			system ("color 60");
			printf("\n\nOUTROS");
		} 	  
		break;
		default:  
		{
			system ("color E0");
			printf ("\n\nOPCAO INVALIDA!\n\nDIGITE NOVAMENTE");
		}
	}
	getch();	
    /* Consulta se quer testar novamente */
    printf ("\n\nDeseja testar de novo [N/n=nao]: ");
    fflush (stdin); 
	opc = getche();
	/* Testa para ver se é para rodar de novo o switch */
	if ( opc != 'N'  &&  opc != 'n' )
	   goto MARCADOR;
	   
	return 0;
}

```

```
/* Bibliotecas utilizadas */ 
#include  <stdio.h> 
#include  <conio.h> 

/* Variáveis globais */ 
int  qtd; 

/* Corpo do programa */ 
int main () 
{   
	printf ("Digite a quantidade de pessoas esperando na fila: " ); 
	fflush (stdin); 
	scanf  ("%d" , &qtd ); 
	switch ( qtd ) 
	{ 
		default: printf ("\n Várias pessoas na fila. "); break; 
		case  0: printf ("\n Ninguém na fila.        "); break; 
		case  1: printf ("\n Uma pessoa na fila.     "); break; 
		case  2: printf ("\n Duas pessoas na fila.   "); break; 
	} 
	getch  (); 
	return 0; 
}
```

- PerfilDivMod
```
/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

/* Variáveis globais */
int  dia,mes,ano, calc, parte1, parte2, resto;

/* Corpo do programa */
int main()
{
    printf ("\nDigite a dia de nascimento: ");
    fflush(stdin); scanf ("%i", &dia);
    printf ("\nDigite o mes de nascimento: ");
    fflush(stdin); scanf ("%i", &mes);
    printf ("\nDigite o ano de nascimento: ");
    fflush(stdin); scanf ("%i", &ano);
    calc = dia*100+mes + ano;
    parte1 = calc / 100;
    parte2 = calc % 100;
    resto  = (parte1 + parte2) % 5;
    switch ( resto )
    {
    	case 0: printf ("\nTIMIDO"); 		break; 
    	case 1: printf ("\nSONHADOR"); 		break; 
    	case 2: printf ("\nPAQUERADOR"); 	break; 
    	case 3: printf ("\nATRAENTE"); 		break; 
    	case 4: printf ("\nIRRSISTIVEL"); 	break; 
	}
	getch();
	return 0;
}
```
- Contagem
```
#include <stdio.h>
#include <conio.h>
float    a, b, c;
int main ()
{
   printf ("\nInforme três números: ");
   fflush (stdin);
   scanf  ("%f %f %f", &a, &b, &c);
   printf ("\n %s" ,  !( a<b+c && b<a+c && c<a+b )  ? "\nNão é um triângulo!"  : ("\n É um triângulo %s", (a==b && b==c) ? "equilátero" : ( a==b || a==c || b==c ) ?  "isósceles"  : "escaleno"));

   getch();
   return 0;
}
```

- DO WHILE
```
  /* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <locale.h> /* para poder usar a função setlocale */
#include <stdlib.h> /* para usar sleep e system */ 

/* Variáveis globais */
char   opc;

/* Corpo do programa */
int main()
{
 setlocale ( LC_ALL, "");
 do
 {
 	system ("cls");
 	system ("color DF");
    printf ("\n---------------");
    printf ("\n  1. Extrato   ");
    printf ("\n  2. Saque     ");
    printf ("\n  3. Depósito  ");
    printf ("\n  S. Sair      ");
    printf ("\n---------------");
    printf ("\n  Sua opção:   ");
    fflush (stdin); opc = getche();
    switch ( opc )
    {
    	case '1': printf ("\n\nEXTRATO"); 	break;
    	case '3': printf ("\n\nDEPÓSITO"); 	break;
        case '2': printf ("\n\nSAQUE"); 	break;
        case 's': case 'S': exit(0);		break;
        default : printf ("\nOPÇÃO INVÁLIDA!");
	}
	sleep(3);
  }
  while ( opc != 's' &&  opc != 'S' );
  return 0;
}

// Enquanto opc for diferente de sair o DO será executado
```

- ExCartão com Setlocal
```
/*-------------------------------
---> Visa: Sempre inicia com o número 4. 
---> Mastercard: Geralmente inicia com os números de 51 a 55. 
No entanto, é importante 
ressaltar que a Mastercard, em parceria 
com a ISO, também possui alguns cartões 
que iniciam com o número 2. 
---> American Express: Começa com os números 34 ou 37. 
---> Discover: Inicia com o número 6. 
---> O que não for algum desses:
 “CARTÃO DE CRÉDITO NÃO IDENTIFICADO”
---------------------------------*/
/* Bibliotecas */
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/* Variáveis globais */
int d1, d2;
char opc;

/* Corpo do programa */
int main ()
{
 setlocale ( LC_ALL, "");
 do
 {
 	system ("cls"); system ("color 2F");
	printf ("\nDigite o 1o digito do cartao: ");
	fflush (stdin); scanf ("%i", &d1);
	switch (d1)
	{
		case 2: printf ("\nMastercard"); break;
		
		case 3: 
		{
			printf ("\nDigite o 2o digito do cartao: ");
			fflush (stdin); scanf ("%i", &d2);	
			if ( d2==4 || d2==7  )
				printf ("\nAmerican Express");
			else
				printf ("\nCARTÃO DE CRÉDITO NÃO IDENTIFICADO");
		}
		break;
		
		case 4: printf ("\nVisa"); 	   	 break;
		
		case 5: 
		{
			printf ("\nDigite o 2o digito do cartao: ");
			fflush (stdin); scanf ("%i", &d2);	
			if ( d2>=1 && d2<=5  )
				printf ("\nMastercard");
			else
			    printf ("\nCARTÃO DE CRÉDITO NÃO IDENTIFICADO");
		}
		break;
		
		case 6: printf ("\nDiscover"); 	 break;
		
		default: printf ("\nCARTÃO DE CRÉDITO NÃO IDENTIFICADO");
	}
	printf ("\n\nQuer testar de novo? [n/N]: ");
	fflush (stdin); opc=getche();
 }
 while ( opc!='n' && opc!='N');
 return 0;
}

```

- WhileUnsignedLongLong Int
```
/* Bibliotecas */
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
#include <locale.h> /* para poder usar a função setlocale */

/* Variáveis globais */
//unsigned long long int nro = 8446744073709551616;
unsigned long long int nro   = 8999999999999999999; /* 8.999.999.999.999.999.999 */
int resto, u=1;

/* Corpo do programa */
int main ()
{	
	setlocale (LC_ALL, ""); /* para correta ortografia */
	while ( nro != 0 )
	{
 		resto = nro % 10;
 		nro  /= 10;
 		printf ("\n%d " , resto);
 		switch (u)
 		{
 			case 1:  printf ("%s", resto>1 ? "unidades" : "unidade"); 	break;
 			case 2:  printf ("%s", resto>1 ? "dezenas"  : "dezena");	break;
 			case 3:  printf ("%s", resto>1 ? "centenas" : "centena"); 	break;
 			case 4:  printf ("%s", resto>1 ? "milhares" : "milhar"); 	break;
 			case 5:  printf ("%s", resto>1 ? "dezenas de milhar"  : "dezena de milhar"); 	break;
 			case 6:  printf ("%s", resto>1 ? "centenas de milhar" : "centena de milhar"); 	break;
 			case 7:  printf ("%s", resto>1 ? "milhões"  : "milhão"); 	break;
 			case 8:  printf ("%s", resto>1 ? "dezenas de milhão"  : "dezenas de milhão"); 	break;
 			case 9:  printf ("%s", resto>1 ? "centenas de milhão" : "centena de milhão"); 	break;
 			case 10: printf ("%s", resto>1 ? "bilhões"  : "bilhão"); 	break;
 			case 11: printf ("%s", resto>1 ? "dezenas de bilhão"  : "dezena de bilhão"); 	break;
 			case 12: printf ("%s", resto>1 ? "centenas de bilhão" : "centena de bilhão"); 	break;
 			case 13: printf ("%s", resto>1 ? "trilhões"  : "trilhão"); 	break;
 			case 14: printf ("%s", resto>1 ? "dezenas de trilhão"  : "dezena de trilhão"); 	break;
 			case 15: printf ("%s", resto>1 ? "centenas de trilhão" : "centena de trilhão"); 	break;
 			case 16: printf ("%s", resto>1 ? "quatrilhões"  : "quatrilhão"); 	break;
 			case 17: printf ("%s", resto>1 ? "dezenas de quatrilhão"  : "dezena de quatrilhão"); 	break;
 			case 18: printf ("%s", resto>1 ? "centenas de quatrilhão" : "centena de quatrilhão"); 	break;
 			case 19: printf ("%s", resto>1 ? "quintilhões"  : "quintilhão"); 	break;
		}
		u++;
	}
 	printf ("\n");
 	getch();
	return 0;
}

```

- Vetores / Arrays Exemplos
```
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int vet[5]; /* Declara um vetor de 5 posições inteiras */
int i; /* índice para acessar cada elemento do vetor */
/* Observação: na Linguagem C, o primeiro elemento de um vetor está no índice zero. */
int main ()
{
 for ( i=0 ; i<5 ; i++ )
 {
 printf ("\nDigite o %d numero: " , i+1 );
 fflush (stdin); scanf ("%d" , &vet[i] );
 }
 printf ("\n\nNúmeros digitados:\n " );
 for ( i=0 ; i<5 ; i++ )
 printf (" %d " , vet[i] );
 getch();
 return 0;
}
```

```
#include <stdio.h>
char pessoa[256];
int ind, tamanho;
int main ()
{
 printf (" Digite um nome: "); /* solicita a digitação do nome */
 fflush (stdin); /* limpa o buffer do teclado */
 scanf ("%s" , &pessoa); /* captura o conteúdo digitado (com formato string - %s) */
 /* na variável pessoa */
 tamanho = 0; /* zera a variável tamanho, pois ainda não foi contabilizada letra alguma */
 ind = 0; /* zera a variável ind, pois, em Linguagem C, a primeira posição é ZERO */
 while ( pessoa[ind] != '\0') /* enquanto o caractere identificado em pessoa[ind] for */
 { /* diferente de “null terminator” ('\0'): */
 tamanho++; /* incrementa tamanho de 1 unidade (mais um caractere) */
 ind++; /* vai para a próxima posição do vetor */
 }
 printf("O nome digitado possui %d letras." , tamanho); /* mostra resultado */
 getch();
 return 0;
}
```

_Particularidade da função scanf:
No programa anterior, se for digitado o nome MARIA, será exibida na tela a mensagem:
O nome digitado possui 5 letras.
Contudo, se for digitado o nome MARIA DE ALMEIDA, o programa continuará exibindo a mensagem:
O nome digitado possui 5 letras.
Aparentemente, parece que a função scanf considera que o texto digitado termina quando é
encontrado o primeiro espaço em branco. Na verdade, o que ocorre é que, ao digitarmos várias
strings para serem capturadas com scanf (MARIA DE ALMEIDA são 3 strings), ao final de cada uma
delas é incorporado o caractere que identifica o final da string (“null terminator” - '\0').
Assim, após a string MARIA ser digitada e acrescentado o espaço em branco o conteúdo da
variável pessoa passa a ser apenas MARIA, sendo o restante das strings desprezadas.
Para contornar este tipo de problema recomenda-se o uso da função gets, uma vez que, para esta
função, o final da string só é considerado após a digitação do enter. Assim, quando se digita
MARIA DE ALMEIDA e depois o enter, aí sim, a string é finalizada.
Para testar isto no programa anterior, apenas digite troque a instrução scanf("%s" , &pessoa);
por gets(pessoa);
