/*
Q7) Faca um programa onde a entrada eh o tipo sanguineo. 
O programa deve retornar quem sao os possiveis receptores. 
Utilize o sistema ABO.
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void main()
{
	char tipo[3];
	while(1)
	{
		printf("Informe o tipo sanguino do doador: ");
		scanf("%s", &tipo);
		printf("O tipo do sanguino do doador eh: %s\n", tipo);
		
		if(!strcmp(tipo,"A+")) // se tipo == "A+" ==> retorna 0, 
	 						   // por isso o uso de ! fazer negacao.
		{
			printf("Os receptores sao: A+ e AB+\n");
		}
		else if(!strcmp(tipo, "A-"))
		{
			printf("Os receptores sao: A+, A-, AB+ e AB-\n");
		}
		else if(!strcmp(tipo, "B+"))
		{
			printf("Os receptores sao: B+ e AB+\n");
		}
		else if(!strcmp(tipo, "B-"))
		{
			printf("Os receptores sao: B+, B-, AB+ e AB-\n");
		}
		else if(!strcmp(tipo, "AB+"))
		{
			printf("Os receptores sao: AB+\n");
		}
		else if(!strcmp(tipo, "AB-"))
		{
			printf("Os receptores sao: AB+ e AB-\n");
		}
		else if(!strcmp(tipo, "O+"))
		{
			printf("Os receptores sao: A+, B+, AB+ e O+\n");
		}
		else if(!strcmp(tipo, "O-"))
		{
			printf("Todos os tipos sanguineos podem receber de O-\n");
		}
	}
}