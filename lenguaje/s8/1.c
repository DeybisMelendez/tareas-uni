#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_ALUMNOS 100

typedef struct {
    int edad;
    char numero_carnet[13];
    char nombre[51];
    char direccion[101];
} Alumno;

int main(void) {
    Alumno alumnos[MAX_ALUMNOS];
    int num_alumnos, i;

    printf("Ingrese el número de alumnos:\n");
    scanf("%d", &num_alumnos);

    if (num_alumnos > MAX_ALUMNOS || num_alumnos <= 0) {
        printf("Número de alumnos no válido. Debe estar entre 1 y %d.\n", MAX_ALUMNOS);
        return 1;
    }

    for (i = 0; i < num_alumnos; i++) {
        printf("\n---*** Alumno %d: ***---\n", i + 1);
        printf("Número de carnet:\n");
        scanf("%50s", alumnos[i].numero_carnet);

        printf("Nombre del alumno:\n");
        scanf("%12s", alumnos[i].nombre);

        printf("Edad del alumno:\n");
        scanf("%d", &alumnos[i].edad);

        printf("Dirección del alumno:\n");
        scanf("\n%100[^\n]", alumnos[i].direccion);
    }

    printf("\nInformación de los alumnos:\n");
    for (i = 0; i < num_alumnos; i++) {
        printf("\nAlumno %d:\n", i + 1);
        printf("Número de carnet: %s\n", alumnos[i].numero_carnet);
        printf("Nombre: %s\n", alumnos[i].nombre);
        printf("Edad: %d\n", alumnos[i].edad);
        printf("Dirección: %s\n", alumnos[i].direccion);
    }

    return 0;
}
