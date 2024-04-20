/*
Q3) Faca um programa onde o usuario entra com um numero e o 
programa deve devolver se o numero eh par ou nao.
*/

#include <stdio.h>

void main(void)
{
	int valor, par;
	
	while(1)
	{
		printf("Informe o valor: ");
		scanf("%d", &valor);
		
		par = valor%2;
		if(par==0) printf("O valor eh par\n");
		else printf("O valor eh impar\n");	
	}
}