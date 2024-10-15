#include <stdio.h>
#include <stdlib.h>

int comparar(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int main(void) {
    int n;

    printf("¿Cuantos numeros desea ingresar?\n");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));

    if (arr == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("Ingrese el numero %d:\n", i+1);
        scanf("%d", &arr[i]);
    }

    qsort(arr, n, sizeof(int), comparar);

    printf("Numeros ordenados de forma ascendente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}
