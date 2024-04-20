/*
Q8) Faca um programa usando ponteiros que percorra todo um vetor (10 posicoes) 
e crie um novo vetor com os valores das posicoes 1, 3, 5.....
*/

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int vetor[] = {2,7,9,10,45,67,94,23,12,5,99,41,11,34,44,89,78};

	int tamanho;
	int i;
	
	int *ptr = &vetor;
	ptr++;
	
	tamanho = sizeof(vetor)/sizeof(int);

	int vetor_saida[tamanho/2];
		
	printf("tamanho do vetor inicial: %d\n", tamanho);
	
	for(i=0; i<tamanho; i++)
	{
		vetor_saida[i] = *ptr;
		ptr = ptr+2;
	}
	
	tamanho = sizeof(vetor_saida)/sizeof(int);
	
	printf("tamanho do vetor final: %d\n", tamanho);
	
	for(i=0; i<tamanho; i++)
	{
		printf("%d - ", vetor_saida[i]);
	}	
}