#include <stdio.h>
#include <string.h>

#define NUM_ESTUDIANTES 2
#define NUM_CORTES 2 // Cortes evaluativos

// Definir la estructura de un estudiante
typedef struct {
    char nombre[50];
    int calificaciones[NUM_CORTES];
} Estudiante;

// Lista de estudiantes
Estudiante estudiantes[NUM_ESTUDIANTES];

// Función para ingresar los datos de los estudiantes
void ingresar_datos() {
    for (int i = 0; i < NUM_ESTUDIANTES; i++) {
        printf("Ingrese el nombre del estudiante %d:\n", i + 1);
        scanf("%s", estudiantes[i].nombre);
        for (int j = 0; j < NUM_CORTES; j++) {
            printf("Ingrese la calificación del estudiante %s en el corte #%d:\n", estudiantes[i].nombre, j + 1);
            scanf("%d", &estudiantes[i].calificaciones[j]);
        }
    }
}

// Función para mostrar las calificaciones de un estudiante
void mostrar_calificaciones(int num_estudiantes, char nombre_estudiante[]) {
    int encontrado = 0;
    for (int i = 0; i < num_estudiantes; i++) {
        if (strcmp(estudiantes[i].nombre, nombre_estudiante) == 0) {
            encontrado = 1;
            printf("Calificaciones del estudiante %s:\n", estudiantes[i].nombre);
            for (int j = 0; j < NUM_CORTES; j++) {
                printf("Corte Evaluativo %d: %d\n", j + 1, estudiantes[i].calificaciones[j]);
            }
            break;
        }
    }
    if (!encontrado) {
        printf("Estudiante no encontrado.\n");
    }
}

int main(void) {
    char nombre_estudiante[50];
    int opcion;

    // Ingresar los datos de los estudiantes
    ingresar_datos();

    // Consultar las calificaciones
    do {
        printf("\nOpciones:\n");
        printf("1. Mostrar calificaciones de un estudiante\n");
        printf("2. Salir\n");
        printf("Elija una opción:\n");
        scanf("%d", &opcion);

        if (opcion == 1) {
            printf("Ingrese el nombre del estudiante:\n");
            scanf("%s", nombre_estudiante);
            mostrar_calificaciones(NUM_ESTUDIANTES, nombre_estudiante);
        }
    } while (opcion != 2);

    return 0;
}