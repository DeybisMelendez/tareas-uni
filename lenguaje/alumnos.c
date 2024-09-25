#include <stdio.h>
#include <string.h>

#define MAX_ESTUDIANTES 100

typedef struct
{
    int id;
    char nombre[50];
    float nota;
} Estudiante;

Estudiante estudiantes[MAX_ESTUDIANTES];
int total_estudiantes = 0;

void agregar_estudiante(int id, char nombre[50], float nota)
{
    if (total_estudiantes < MAX_ESTUDIANTES)
    {
        estudiantes[total_estudiantes].id = id;
        strcpy(estudiantes[total_estudiantes].nombre, nombre);
        estudiantes[total_estudiantes].nota = nota;
        total_estudiantes++;
    }
    else
    {
        printf("Error: El número máximo de estudiantes ha sido alcanzado.\n");
    }
}

void actualizar_nota(int id, float nueva_nota)
{
    for (int i = 0; i < total_estudiantes; i++)
    {
        if (estudiantes[i].id == id)
        {
            estudiantes[i].nota = nueva_nota;
            printf("Nota actualizada para el estudiante %s.\n", estudiantes[i].nombre);
            return;
        }
    }
    printf("Error: Estudiante no encontrado.\n");
}

void imprimir_estudiantes(void)
{
    printf("\n--- Lista de estudiantes: ---\n");
    for (int i = 0; i < total_estudiantes; i++)
    {
        printf("ID: %d, Nombre: %s, Nota: %.2f\n", estudiantes[i].id, estudiantes[i].nombre, estudiantes[i].nota);
    }
}

int main(void)
{
    int opcion, id;
    float nota;
    char nombre[50];

    while (1)
    {
        printf("\n--- Menu ---\n");
        printf("1. Agregar estudiante\n");
        printf("2. Actualizar nota\n");
        printf("3. Mostrar estudiantes\n");
        printf("4. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        switch (opcion)
        {
        case 1:
            printf("Ingrese el ID del estudiante: ");
            scanf("%d", &id);
            printf("Ingrese el nombre del estudiante: ");
            scanf("%s", nombre);
            printf("Ingrese la nota del estudiante: ");
            scanf("%f", &nota);
            agregar_estudiante(id, nombre, nota);
            break;
        case 2:
            printf("Ingrese el ID del estudiante para actualizar la nota: ");
            scanf("%d", &id);
            printf("Ingrese la nueva nota: ");
            scanf("%f", &nota);
            actualizar_nota(id, nota);
            break;
        case 3:
            imprimir_estudiantes();
            break;
        case 4:
            return 0;
        default:
            printf("Opcion invalida. Intente de nuevo.\n");
        }
    }

    return 0;
}