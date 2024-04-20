/*
Q4) Faça um programa que recebe 3 valores não inteiros
 do usuário e o programa mostra o maior,
  o menor e o valor intermediário.
*/

#include <stdio.h>

int main()
{
  float a, b, c;
  float maior, menor, intermediario;

  printf("Digite os valores: \n");
  fflush(stdout); // no Windows o \n não garante a limpeza do buffer de saída
  scanf("%f %f %f", &a, &b, &c);

  if (a == b && b == c)
  {
    printf("Os valores digitados são iguais \n");
    return 1;
  }

  if (a > b)
  {
    if (a > c)
    {
      maior = a;
      if (b > c)
      {
        intermediario = b;
        menor = c;
      }
      else
      {
        intermediario = c;
        menor = b;
      }
    }
    else
    {
      maior = c;
      intermediario = a;
      menor = b;
    }
  }
  else
  {
    if (b > c)
    {
      maior = b;
      if (a > c)
      {
        intermediario = a;
        menor = c;
      }
      else
      {
        intermediario = c;
        menor = a;
      }
    }
    else
    {
      maior = c;
      intermediario = b;
      menor = a;
    }
  }

  printf("Maior: %.2f\n", maior);
  printf("Menor: %.2f\n", menor);
  printf("Intermediário: %.2f\n", intermediario);

  printf("Valores digitados: %.2f %.2f %.2f\n", a, b, c);
}