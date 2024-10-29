#include <stdio.h>
#include <string.h>

#define MAX_ESTUDIANTES 10

struct Estudiante {
    char nombre[50];
    char sexo; // 'M' para masculino, 'F' para femenino
    int edad;
    float notas[5]; // Arreglo unidimensional de 5 elementos
};

float calcularPromedio(float notas[], int numNotas) {
    float suma = 0;
    for (int i = 0; i < numNotas; i++) {
        suma += notas[i];
    }
    return suma / numNotas;
}

int main() {
    struct Estudiante estudiantes[MAX_ESTUDIANTES];
    int numEstudiantes;
    
    printf("Ingrese el número de estudiantes (máximo %d): ", MAX_ESTUDIANTES);
    scanf("%d", &numEstudiantes);
    
    if (numEstudiantes > MAX_ESTUDIANTES) {
        printf("El número de estudiantes no puede ser mayor que %d.\n", MAX_ESTUDIANTES);
        return 1;
    }

    for (int i = 0; i < numEstudiantes; i++) {
        printf("\nEstudiante %d:\n", i + 1);
        printf("Nombre: ");
        scanf("%s", estudiantes[i].nombre);
        printf("Sexo (M/F): ");
        scanf(" %c", &estudiantes[i].sexo);
        printf("Edad: ");
        scanf("%d", &estudiantes[i].edad);

        printf("Ingrese las 5 notas del estudiante:\n");
        for (int j = 0; j < 5; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &estudiantes[i].notas[j]);
        }
    }

    float mayorPromedio = 0;
    char nombreMayorPromedio[50];

    for (int i = 0; i < numEstudiantes; i++) {
        float promedio = calcularPromedio(estudiantes[i].notas, 5);
        printf("\nPromedio de %s: %.2f\n", estudiantes[i].nombre, promedio);
        
        if (promedio > mayorPromedio) {
            mayorPromedio = promedio;
            strcpy(nombreMayorPromedio, estudiantes[i].nombre);
        }
    }

    printf("\nEl estudiante con el mayor promedio es: %s con un promedio de %.2f\n", nombreMayorPromedio, mayorPromedio);

    return 0;
}
