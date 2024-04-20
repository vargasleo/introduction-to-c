/*
Q6) Faca um programa que leia um array e separe em dois arrays, 
um contendo os numeros pares e outro contendo os numeros impares.
*/

#include <stdlib.h>
#include <stdio.h>

void main()
{
 	int vetor[10] = {2,4,3,10,45,67,32,90,21,70};
	int vetor_par[10];
	int vetor_impar[10];
	int i, j=0, k=0;
	
	for(i=0; i<10; i++)
	{
	 	if(vetor[i]%2 == 0)
 		{
 		 	vetor_par[j] = vetor[i];
	  		j++;		
  		}	
  		else
  		{
  			vetor_impar[k] = vetor[i];
  			k++;
	    }
	}	
	
	printf("\nOs valores pares sao: ");
	for(i=0; i<j-1; i++)
	{
		printf("%d - ", vetor_par[i]);
	}
	
	printf("\nOs valores impares sao: ");
	for(i=0; i<k-1; i++)
	{
		printf("%d - ", vetor_impar[i]);
	}
}