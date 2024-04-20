#include <stdio.h>

int main(void)
{
    printf("Digite sua altura em metros (utilize '.' para as casas decimais)\n");
    float altura;
    scanf("%f", &altura);

    printf("Digite seu peso em quilogramas\n");
    float peso;
    scanf("%f", &peso);
    
    float imc;

	imc = peso / (altura * altura);
 
    if (imc <= 16.9) printf("Muito abaixo do peso");
	else if(imc <= 18.4) printf("Abaixo do peso");
	else if(imc <= 24.9) printf("Peso normal");
	else if(imc <= 29.9) printf("Acima do peso");
    else if (imc <= 34.9) printf("Obesidade grau I");
    else if (imc <= 40) printf("Obesidade grau II");
	else printf("Obesidade grau III");
    printf("\n");
    return 0;
}