#include <stdio.h>

#define FILAS 3
#define COLUMNAS 3

void sumar_filas(int *matriz, int *resultado, int filas, int columnas) {
    for (int i = 0; i < filas; i++) {
        int suma = 0;
        for (int j = 0; j < columnas; j++) {
            suma += *(matriz + i * columnas + j);
        }
        *(resultado + i) = suma;
    }
}

int main(void) {
    int matriz[FILAS][COLUMNAS];
    int resultado[FILAS];

    printf("Ingrese los elementos de la matriz %d x %d):\n", FILAS, COLUMNAS);
    for (int i = 0; i < FILAS; i++) {
        for (int j = 0; j < COLUMNAS; j++) {
            printf("Elemento [%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    sumar_filas((int *)matriz, resultado, FILAS, COLUMNAS);

    printf("La suma de cada fila es:\n");
    for (int i = 0; i < FILAS; i++) {
        printf("Fila %d: %d\n", i, resultado[i]);
    }

    return 0;
}
