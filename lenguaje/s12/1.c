#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_INVITADOS 100
#define MAX_NOMBRE 50

typedef struct {
    char nombre[MAX_NOMBRE];
} Invitado;

typedef struct {
    Invitado invitados[MAX_INVITADOS];
    int cantidad;
} Categoria;

void menuPrincipal();
void menuCategoria(Categoria *categoria, char *nombreCategoria);
void agregarInvitado(Categoria *categoria);
void buscarInvitado(Categoria *categoria);
void borrarInvitado(Categoria *categoria);
void imprimirInvitados(Categoria *categoria);
void modificarInvitado(Categoria *categoria);

int main() {
    Categoria companeros = { .cantidad = 0 };
    Categoria trabajo = { .cantidad = 0 };
    Categoria familiares = { .cantidad = 0 };
    Categoria gimnasio = { .cantidad = 0 };
    int opcion;

    while (1) {
        menuPrincipal();
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                menuCategoria(&companeros, "Compañeros");
                break;
            case 2:
                menuCategoria(&trabajo, "Trabajo");
                break;
            case 3:
                menuCategoria(&familiares, "Familiares");
                break;
            case 4:
                menuCategoria(&gimnasio, "Gimnasio");
                break;
            case 5:
                printf("Saliendo del programa...\n");
                return 0;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    }
    return 0;
}

void menuPrincipal() {
    printf("\n--- MENU PRINCIPAL ---\n");
    printf("1. COMPAÑEROS\n");
    printf("2. TRABAJO\n");
    printf("3. FAMILIARES\n");
    printf("4. GIMNASIO\n");
    printf("5. SALIR\n");
    printf("Elija una opción:\n");
}

void menuCategoria(Categoria *categoria, char *nombreCategoria) {
    int opcion;
    while (1) {
        printf("\n--- MENU %s ---\n", nombreCategoria);
        printf("1. Agregar\n");
        printf("2. Buscar\n");
        printf("3. Borrar\n");
        printf("4. Imprimir datos\n");
        printf("5. Modificar\n");
        printf("6. Regresar al menú anterior\n");
        printf("Elija una opción:\n");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                agregarInvitado(categoria);
                break;
            case 2:
                buscarInvitado(categoria);
                break;
            case 3:
                borrarInvitado(categoria);
                break;
            case 4:
                imprimirInvitados(categoria);
                break;
            case 5:
                modificarInvitado(categoria);
                break;
            case 6:
                return;
            default:
                printf("Opción no válida. Intente de nuevo.\n");
        }
    }
}

void agregarInvitado(Categoria *categoria) {
    if (categoria->cantidad >= MAX_INVITADOS) {
        printf("La lista de invitados está llena.\n");
        return;
    }
    printf("Ingrese el nombre del invitado:\n");
    scanf("%s", categoria->invitados[categoria->cantidad].nombre);
    categoria->cantidad++;
    printf("Invitado agregado correctamente.\n");
}

void buscarInvitado(Categoria *categoria) {
    char nombre[MAX_NOMBRE];
    printf("Ingrese el nombre del invitado a buscar:\n");
    scanf("%s", nombre);
    for (int i = 0; i < categoria->cantidad; i++) {
        if (strcmp(categoria->invitados[i].nombre, nombre) == 0) {
            printf("Invitado encontrado: %s\n", categoria->invitados[i].nombre);
            return;
        }
    }
    printf("Invitado no encontrado.\n");
}

void borrarInvitado(Categoria *categoria) {
    char nombre[MAX_NOMBRE];
    printf("Ingrese el nombre del invitado a borrar:\n");
    scanf("%s", nombre);
    for (int i = 0; i < categoria->cantidad; i++) {
        if (strcmp(categoria->invitados[i].nombre, nombre) == 0) {
            for (int j = i; j < categoria->cantidad - 1; j++) {
                categoria->invitados[j] = categoria->invitados[j + 1];
            }
            categoria->cantidad--;
            printf("Invitado borrado correctamente.\n");
            return;
        }
    }
    printf("Invitado no encontrado.\n");
}

void imprimirInvitados(Categoria *categoria) {
    if (categoria->cantidad == 0) {
        printf("No hay invitados en esta categoría.\n");
        return;
    }
    printf("Lista de invitados:\n");
    for (int i = 0; i < categoria->cantidad; i++) {
        printf("%d. %s\n", i + 1, categoria->invitados[i].nombre);
    }
}

void modificarInvitado(Categoria *categoria) {
    char nombre[MAX_NOMBRE];
    printf("Ingrese el nombre del invitado a modificar:\n");
    scanf("%s", nombre);
    for (int i = 0; i < categoria->cantidad; i++) {
        if (strcmp(categoria->invitados[i].nombre, nombre) == 0) {
            printf("Ingrese el nuevo nombre:\n");
            scanf("%s", categoria->invitados[i].nombre);
            printf("Invitado modificado correctamente.\n");
            return;
        }
    }
    printf("Invitado no encontrado.\n");
}
