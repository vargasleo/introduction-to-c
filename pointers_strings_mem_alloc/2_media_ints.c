/*
Q2) Faca um programa onde o usuario informa 3 numeros inteiros 
e o programa devolve a media destes numeros. Considerando que esse 
resultado podera nao ser inteiro.
*/
#include <stdio.h>

void main(void)
{
	int valor1, valor2, valor3;
	float media;
	printf("Informe o primeiro valor: ");
	scanf("%d", &valor1);
	printf("\nInforme o segundo valor: ");
	scanf("%d", &valor2);
	printf("\nInforme o terceiro valor: ");
	scanf("%d", &valor3);
	media = ((float)valor1 + (float)valor2 + (float)valor3)/3;
	printf("\nA media dos 3 valores eh: %.3f", media);
}