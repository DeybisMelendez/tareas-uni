#include <stdio.h>

#define MAX_ESTUDIANTES 10
#define MAX_CALIFICACIONES 5

typedef struct {
    char Nombre[50];
    float Calificaciones[MAX_CALIFICACIONES];
} Estudiante;

int main() {
    Estudiante estudiantes[MAX_ESTUDIANTES];
    float suma, promedio;
    
    for (int i = 0; i < MAX_ESTUDIANTES; i++) {
        printf("Ingrese el nombre del estudiante %d:\n", i + 1);
        scanf("%49s", estudiantes[i].Nombre);

        suma = 0;

        for (int j = 0; j < MAX_CALIFICACIONES; j++) {
            printf("Ingrese la calificación %d:\n", j + 1);
            scanf("%f", &estudiantes[i].Calificaciones[j]);
            suma += estudiantes[i].Calificaciones[j];
        }

        promedio = suma / MAX_CALIFICACIONES;
        printf("Promedio de calificaciones de %s: %.2f\n", estudiantes[i].Nombre, promedio);
        printf("\n");
    }

    return 0;
}
