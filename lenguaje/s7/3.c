#include <stdio.h>

int main(void) {
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

    for (int i = 0; i < n; i++) {
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
