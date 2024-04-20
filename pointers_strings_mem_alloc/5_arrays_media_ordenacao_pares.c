/*
Q5) Faça um programa que a partir de um array com 10 números
 informe para o usuário:
 a) maior valor;
 b) média dos valores;
 c) os valores dispostos em ordem crescente;
 d) todos os valores pares;
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int tamanho_array;
    printf("Digite o tamanho do array:\n");
    fflush(stdout);
    scanf("%d", &tamanho_array);

    printf("Digite %d valores:\n", tamanho_array);
    fflush(stdout);

    int *array = (int *)malloc(tamanho_array * sizeof(int));

    int i;
    for (i = 0; i < tamanho_array; i++)
    {
        scanf("%d", &array[i]);
    }

    int *p;
    int maior = *array;
    float media = 0;
    for (p = array; p < array + tamanho_array; p++)
    {
        if (*p > maior)
        {
            maior = *p;
        }
        media += *p;
    }
    media /= tamanho_array;

    printf("Maior valor: %d\n", maior);
    printf("Media dos valores: %f\n", media);

    int *q, aux;

    for (p = array; p < array + tamanho_array - 1; p++)
    {
        for (q = p + 1; q < array + tamanho_array; q++)
        {
            if (*p > *q)
            {
                aux = *p;
                *p = *q;
                *q = aux;
            }
        }
    }

    printf("Valores em ordem crescente: ");
    for (p = array; p < array + tamanho_array; p++)
    {
        printf("%d ", *p);
    }
    free(array);
}
