// LEONARDO VARGAS SCHILLING

#include <stdio.h>
#include <string.h>

int main() {
    char nome[] = "Leonardo";
    int tamanho = strlen(nome);
    char nomeInvertido[tamanho + 1];
    nomeInvertido[tamanho] = '\0';

    char *ponteiroInicio = nome;
    char *ponteiroFim = nome + tamanho - 1;

    for(int i = 0; i < tamanho; i++) {
        nomeInvertido[i] = *ponteiroFim--;
    }

    printf("Nome original: %s\n", nome);
    printf("Nome invertido: %s\n", nomeInvertido);
    return 0;
}