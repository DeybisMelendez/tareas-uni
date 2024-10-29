#include <stdio.h>

#define MAX_TITULO 50
#define MAX_AUTOR 30
#define MAX_EDITORIAL 30

typedef struct {
    char Titulo[MAX_TITULO];
    char Autor[MAX_AUTOR];
    char Editorial[MAX_EDITORIAL];
    int AnioPublicacion;
} InfoLibro;

int main(void) {
    InfoLibro libro;

    printf("Ingrese el titulo del libro:\n");
    scanf("%s", libro.Titulo);

    printf("Ingrese el autor del libro:\n");
    scanf("%s", libro.Autor);

    printf("Ingrese la editorial del libro:\n");
    scanf("%s", libro.Editorial);

    printf("Ingrese el anio de publicacion:\n ");
    scanf("%d", &libro.AnioPublicacion);

    printf("\nInformacion del libro:\n");
    printf("Titulo: %s\n", libro.Titulo);
    printf("Autor: %s\n", libro.Autor);
    printf("Editorial: %s\n", libro.Editorial);
    printf("Anio de publicacion: %d\n", libro.AnioPublicacion);

    return 0;
}
