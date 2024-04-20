// LEONARDO VARGAS SCHILLING

#include <stdio.h>

void bubbleSort(int *arr, int n) {
    int i, j, temp;
    for (i = 0; i < n-1; i++) {
        for (j = 0; j < n-i-1; j++) {
            if (*(arr+j) > *(arr+j+1)) {
                temp = *(arr+j);
                *(arr+j) = *(arr+j+1);
                *(arr+j+1) = temp;
            }
        }
    }
}

int main() {
    int valores[10] = {64, 34, 25, 12, 22, 11, 90, 88, 76, 54};
    int n = sizeof(valores) / sizeof(valores[0]);

    printf("Array original:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    bubbleSort(valores, n);

    printf("Array ordenado:\n");
    for(int i = 0; i < n; i++) {
        printf("%d ", valores[i]);
    }
    printf("\n");

    return 0;
}