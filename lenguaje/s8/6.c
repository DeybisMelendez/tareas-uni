#include <stdio.h>
#include <stdlib.h>

typedef struct {
    char Nombre[100];
    int Edad;
    char Sexo;
    int CondicionSalud;
    char Telefono[15];
} Paciente;

int main(void) {
    int N;
    Paciente *pacientes;

    printf("Ingrese el numero de pacientes:\n");
    scanf("%d", &N);

    pacientes = (Paciente *)malloc(N * sizeof(Paciente));
    if (pacientes == NULL) {
        printf("Error al asignar memoria.\n");
        return 1;
    }

    for (int i = 0; i < N; i++) {
        printf("\nPaciente %d:\n", i + 1);
        printf("Ingrese el nombre y apellido:\n");
        scanf("\n%99[^\n]", pacientes[i].Nombre);
        printf("Ingrese la edad:\n");
        scanf("%d", &pacientes[i].Edad);
        printf("Ingrese el sexo (M/F):\n");
        scanf("%1s", &pacientes[i].Sexo);
        printf("Ingrese la condición de salud (1-5):\n");
        scanf("%d", &pacientes[i].CondicionSalud);
        printf("Ingrese el teléfono:\n");
        scanf("%s", pacientes[i].Telefono);
    }

    int contadorHombres = 0;
    int contadorMujeres = 0;
    int contadorCondicion[5] = {0};
    
    for (int i = 0; i < N; i++) {
        if (pacientes[i].Sexo == 'M' || pacientes[i].Sexo == 'm') {
            contadorHombres++;
        } else if (pacientes[i].Sexo == 'F' || pacientes[i].Sexo == 'f') {
            contadorMujeres++;
        }
        if (pacientes[i].CondicionSalud >= 1 && pacientes[i].CondicionSalud <= 5) {
            contadorCondicion[pacientes[i].CondicionSalud - 1]++;
        }
    }

    float porcentajeHombres = (float)contadorHombres / N * 100;
    float porcentajeMujeres = (float)contadorMujeres / N * 100;

    printf("\nPorcentaje de hombres registrados: %.2f%%\n", porcentajeHombres);
    printf("Porcentaje de mujeres registrados: %.2f%%\n", porcentajeMujeres);

    printf("\nNúmero de pacientes en cada categoría de condición de salud:\n");
    for (int i = 0; i < 5; i++) {
        printf("Condición %d: %d pacientes\n", i + 1, contadorCondicion[i]);
    }

    printf("\nPacientes con condición de salud máxima (5):\n");
    for (int i = 0; i < N; i++) {
        if (pacientes[i].CondicionSalud == 5) {
            printf("Nombre: %s, Teléfono: %s\n", pacientes[i].Nombre, pacientes[i].Telefono);
        }
    }

    free(pacientes);

    return 0;
}
