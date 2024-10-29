#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char Nombre[50];
    char Sexo;
    float Sueldo;
} Empleado;

int main() {
    int N;
    Empleado *empleados;

    printf("Ingrese el número de empleados:\n");
    scanf("%d", &N);

    empleados = (Empleado *)malloc(N * sizeof(Empleado));
    if (empleados == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("\nEmpleado %d:\n", i + 1);
        printf("Ingrese el nombre:\n");
        scanf("%s", empleados[i].Nombre);
        printf("Ingrese el sexo (M/F):\n");
        scanf("%1s", &empleados[i].Sexo);
        printf("Ingrese el sueldo:\n");
        scanf("%f", &empleados[i].Sueldo);
    }

    float menorSueldo = 1000000000;
    float mayorSueldo = 0;
    Empleado *empleadoMenor = &empleados[0];
    Empleado *empleadoMayor = &empleados[0];

    for (int i = 1; i < N; i++) {
        if (empleados[i].Sueldo < menorSueldo) {
            menorSueldo = empleados[i].Sueldo;
            empleadoMenor = &empleados[i];
        }
        if (empleados[i].Sueldo > mayorSueldo) {
            mayorSueldo = empleados[i].Sueldo;
            empleadoMayor = &empleados[i];
        }
    }

    printf("\nEmpleado con menor sueldo:\n");
    printf("Nombre: %s, Sexo: %c, Sueldo: %.2f\n", empleadoMenor->Nombre, empleadoMenor->Sexo, empleadoMenor->Sueldo);
    
    printf("\nEmpleado con mayor sueldo:\n");
    printf("Nombre: %s, Sexo: %c, Sueldo: %.2f\n", empleadoMayor->Nombre, empleadoMayor->Sexo, empleadoMayor->Sueldo);

    free(empleados);

    return 0;
}
