#include <stdio.h>

int main() {
    int operacao;
    float parcela_1, parcela_2, resultado;

    printf("**** Calculadora 4 operações básicas ****\n");
    printf("Informe a opção desejada (0=>soma, 1=>subtração, 2=>multiplicação, 3=> divisão): ");
    scanf("%d", &operacao);

    if(operacao < 0 || operacao > 3) {
        printf("Opção inválida (0=>soma, 1=>subtração, 2=>multiplicação, 3=> divisão)\n");
        return 1;
    }

    printf("Informe o valor da parcela 1: ");
    scanf("%f", &parcela_1);

    printf("Informe o valor da parcela 2: ");
    scanf("%f", &parcela_2);

    switch(operacao) {
        case 0:
            resultado = parcela_1 + parcela_2;
            break;
        case 1:
            resultado = parcela_1 - parcela_2;
            break;
        case 2:
            resultado = parcela_1 * parcela_2;
            break;
        case 3:
            if(parcela_2 == 0) {
                printf("Erro: Divisão por zero não é permitida.\n");
                return 1;
            }
            resultado = parcela_1 / parcela_2;
            break;
    }

    printf("--------------------------------------\n");
    printf("O resultado da operação é %.2f\n", resultado);
    printf("--------------------------------------\n");

    return 0;
}