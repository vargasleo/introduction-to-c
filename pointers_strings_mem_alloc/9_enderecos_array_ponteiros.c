/*
Q9) Faca um programa usando ponteiros que informe o endereco onde cada valor 
de um array de 5 posicoes esta armazenado.
*/

#include <stdio.h>

int main()
{
	char vetor[] = {'a', 'e', 'i', 'o', 'u'};
	char *ptr;
	
	ptr = &vetor[0]; 
	
	int tamanho = sizeof(vetor)/sizeof(vetor[0]);
	int i;
	
	for(i=0; i< tamanho; i++)
	{
		printf("%p\n", ptr);
		ptr++;
		
		// ou
		// printf("%p\n", &vetor[i]);
	}
	
}