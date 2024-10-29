#include <stdio.h>
#include <string.h>

struct direccion {
    int numero;
    char calle[25];
    char nombre[30];
} d[40]; // Array de 40 estructuras "direccion"

void funcion(struct direccion);

int main(void) {
    int i;

    // Solicita la información para 40 personas
    for (i = 0; i < 40; i++) {
        printf("Introduce el nombre de la persona %d: ", i + 1);
        fgets(d[i].nombre, 30, stdin);
        d[i].nombre[strcspn(d[i].nombre, "\n")] = 0;
        printf("Introduce la calle de la persona %d: ", i + 1);
        fgets(d[i].calle, 25, stdin);
        d[i].calle[strcspn(d[i].calle, "\n")] = 0;

        printf("Introduce el numero de la persona %d: ", i + 1);
        scanf("%d", &d[i].numero);
        getchar();
    }


    for (i = 0; i < 40; i++) {
        printf("\nInformación de la persona %d:\n", i + 1);
        printf("Nombre: %s\n", d[i].nombre);
        printf("Calle: %s\n", d[i].calle);
        printf("Número: %d\n", d[i].numero);
    }

    return 0;
}