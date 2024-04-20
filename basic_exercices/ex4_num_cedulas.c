#include <stdio.h>

void main()
{
    int valor;
    int nota100, nota50, nota20, nota10, nota5;
    printf("Digite o valor: ");
    scanf("%d", &valor);

    nota100 = valor/100;
    nota50 = (valor%100)/50;
    nota20 = ((valor%100)%50)/20;
    nota10 = (((valor%100)%50)%20)/10;
    nota5 = ((((valor%100)%50)%20)%10)/5;

    printf("Notas 100= %d, 50=%d, 20=%d, 10=%d, 5=%d", nota100, nota50, nota20, nota10, nota5);
}