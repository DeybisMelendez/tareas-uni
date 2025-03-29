#include <stdio.h>

#define MAX_SIZE 10

void pedir_matriz(int matriz[MAX_SIZE][MAX_SIZE], int tam, char nombre) {
    printf("Ingrese los elementos de la matriz %c (%dx%d):\n", nombre, tam, tam);
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("[%d][%d]:\n", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void imprimir_matriz(int matriz[MAX_SIZE][MAX_SIZE], int tam) {
    printf("Resultado:\n");
    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            printf("%4d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int main(void) {
    int tam;
    char operacion;
    int matriz_a[MAX_SIZE][MAX_SIZE], matriz_b[MAX_SIZE][MAX_SIZE], resultado[MAX_SIZE][MAX_SIZE];

    do {
        printf("Seleccione una operacion (+, -, *, /):\n");
        scanf("%c", &operacion);
    } while (operacion != '+' && operacion != '-' && operacion != '*' && operacion != '/');

    do {
        printf("Ingrese el tamano de la matriz (entre 2 y 10):\n");
        scanf("%i", &tam);
    } while (tam < 2 || tam > 10);

    pedir_matriz(matriz_a, tam, 'A');
    pedir_matriz(matriz_b, tam, 'B');

    for (int i = 0; i < tam; i++) {
        for (int j = 0; j < tam; j++) {
            switch (operacion) {
                case '+':
                    resultado[i][j] = matriz_a[i][j] + matriz_b[i][j];
                    break;
                case '-':
                    resultado[i][j] = matriz_a[i][j] - matriz_b[i][j];
                    break;
                case '*':
                    resultado[i][j] = matriz_a[i][j] * matriz_b[i][j];
                    break;
                case '/':
                    resultado[i][j] = (matriz_b[i][j] != 0) ? matriz_a[i][j] / matriz_b[i][j] : 0;
                    break;
                default:
                    printf("Operacion no valida.\n");
                    return 1;
            }
        }
    }

    imprimir_matriz(resultado, tam);

    return 0;
}