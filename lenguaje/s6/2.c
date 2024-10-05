#include <stdio.h>

void llenar_matriz(int *matriz, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                *(matriz + i * n + j) = 1;
            } else {
                printf("Introduce el elemento [%d][%d]:\n", i, j);
                scanf("%d", (matriz + i * n + j));
            }
        }
    }
}

void imprimir_matriz(int *matriz, int n) {
    printf("Matriz resultante:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", *(matriz + i * n + j));
        }
        printf("\n");
    }
}

int main(void) {
    int n;

    printf("Introduce el tamaño N de la matriz NxN:\n");
    scanf("%d", &n);

    int matriz[n][n];

    llenar_matriz((int *)matriz, n);

    imprimir_matriz((int *)matriz, n);

    return 0;
}