#include <stdio.h>
#include <stdlib.h>

int compararAsc(const void *a, const void *b) {
    return (*(int*)a - *(int*)b);
}

int compararDesc(const void *a, const void *b) {
    return (*(int*)b - *(int*)a);
}

int ejercicio1(void) {
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

    qsort(arr, n, sizeof(int), compararAsc);

    printf("Numeros ordenados de forma ascendente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

int ejercicio2(void) {
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

    qsort(arr, n, sizeof(int), compararDesc);

    printf("Numeros ordenados de forma descendente:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    free(arr);

    return 0;
}

int ejercicio3(void) {
    int n;

    printf("¿Cuantos números desea ingresar?\n");
    scanf("%d", &n);

    int arr[n];

    printf("Ingrese %d numeros:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int mayor = arr[0];
    int menor = arr[0];

    for (int i = 1; i < n; i++) {
        if (arr[i] > mayor) {
            mayor = arr[i];
        }
        if (arr[i] < menor) {
            menor = arr[i];
        }
    }

    printf("El número mayor es: %d\n", mayor);
    printf("El número menor es: %d\n", menor);

    return 0;
}

int main(void) {
    int opcion;

    do {
        // Menú de opciones
        printf("\nMenu de opciones:\n");
        printf("1. Ordenar números de forma ascendente\n");
        printf("2. Ordenar números de forma descendente\n");
        printf("3. Encontrar el número mayor y menor\n");
        printf("4. Salir\n");
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        // Llamar a la función correspondiente
        switch(opcion) {
            case 1:
                ejercicio1();
                return 0;
            case 2:
                ejercicio2();
                return 0;
            case 3:
                ejercicio3();
                return 0;
            case 4:
                printf("Saliendo del programa.\n");
                return 0;
            default:
                printf("Opción no válida. Intente nuevamente.\n");
                return 0;
        }
    } while (opcion != 4);

    return 0;
}