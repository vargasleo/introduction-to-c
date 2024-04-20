#include <stdio.h>
#include <string.h>

int main()
{
    char nome[100];
    printf("Digite seu nome: ");
    scanf("%99s", nome);

    int tamanho = strlen(nome);
    char *ponteiroNome = nome;
    char nomeInverso[tamanho + 1];
    nomeInverso[tamanho] = '\0';

    char *ponteiroParaFim = ponteiroNome + tamanho - 1;
    for(int i = 0; i < tamanho; i++) 
    {
        nomeInverso[i] = *(ponteiroParaFim - i);
    }
    printf("Nome inverso: %s\n", nomeInverso);
    return 0;
}