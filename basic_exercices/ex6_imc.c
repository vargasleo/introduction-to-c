#include <stdio.h>
#include <string.h>

float calcula_imc(float peso, float altura);
void classifica_imc(float imc);

char classificacao_imc[50];

int main(void)
{
    char opcao;
    do {
        printf("\nDeseja calcular o seu IMC (s/n)?");
        scanf(" %c", &opcao);

        while(opcao != 's' && opcao != 'n') {
            printf("Opção inválida. Por favor, digite 's' para sim ou 'n' para não: ");
            scanf(" %c", &opcao);
        }

        if (opcao == 's')
        {
            printf("Digite sua altura em metros (utilize '.' para as casas decimais)\n");
            float altura;
            scanf("%f", &altura);

            printf("Digite seu peso em quilogramas\n");
            float peso;
            scanf("%f", &peso);
            
            float imc = calcula_imc(peso, altura);
            classifica_imc(imc);
            printf(classificacao_imc);
        }
    } while (opcao == 's');
    
    printf("Encerrando\n");

    return 0;
}


float calcula_imc(float peso, float altura)
{
	return peso / (altura * altura);
}

void classifica_imc(float imc)
{
    if (imc <= 16.9) strcpy(classificacao_imc, "Muito abaixo do peso");
	else if(imc <= 18.4) strcpy(classificacao_imc, "Abaixo do peso");
	else if(imc <= 24.9) strcpy(classificacao_imc, "Peso normal");
	else if(imc <= 29.9) strcpy(classificacao_imc, "Acima do peso");
    else if (imc <= 34.9) strcpy(classificacao_imc, "Obesidade grau I");
    else if (imc <= 40) strcpy(classificacao_imc, "Obesidade grau II");
	else strcpy(classificacao_imc, "Obesidade grau III");
}