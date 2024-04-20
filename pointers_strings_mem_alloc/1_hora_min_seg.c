/*
Q1) Faça um programa onde o usuário entre com o tempo em segundos de um jogo de futebol. 
 O programa deve calcular e apresentar ao usuário o tempo equivalente em horas, minutos e segundos.
*/
#include <stdio.h>

int main()
{
    int segundos;
    int hor, min, seg;
    printf("Informe um valor em segundos: ");

    scanf("%d", &segundos);

    hor = segundos/3600;
    min = (segundos%3600)/60;
    seg = (segundos%3600)%60;

    printf("%d segundos corresponde a %d horas, %d minutos e %d segundos\n", segundos, hor, min, seg);

    return 0;
}