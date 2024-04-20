#include <stdio.h>

int main() {
    int n, primeiro = 0, segundo = 1, seguinte, i;

    printf("Digite o número de termos: ");
    scanf("%d", &n);

    printf("Sequência de Fibonacci: ");

    for (i = 0; i < n; i++) {
        if (i <= 1)
            seguinte = i;
        else {
            seguinte = primeiro + segundo;
            primeiro = segundo;
            segundo = seguinte;
        }
        printf("%d ", seguinte);
    }
    printf("\n");

    return 0;
}