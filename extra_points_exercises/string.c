// LEONARDO VARGAS SCHILLING

#include <stdio.h> 
#include <string.h>

int main() {
    char texto[100];
    printf("Digite seu texto de até 100 caracteres: ");
    fgets(texto, sizeof(texto), stdin);

    int tamanho = strlen(texto);
    char textoInvertido[tamanho + 1];
    textoInvertido[tamanho] = '\0';

    char *ponteiroFim = texto + tamanho - 1;

    for(int i = 0; i < tamanho; i++) {
        textoInvertido[i] = *ponteiroFim--;
    }

    printf("Texto invertido: %s\n", textoInvertido);
    return 0;
}