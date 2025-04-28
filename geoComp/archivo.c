#include <stdio.h>

int main() {
    FILE *archivo;
    char nombre[50];
    int edad;

    archivo = fopen("datos.txt", "w");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para escribir.\n");
        return 1;
    }

    printf("Ingrese su nombre:\n");
    fgets(nombre, sizeof(nombre), stdin);

    printf("Ingrese su edad:\n");
    scanf("%d", &edad);

    fprintf(archivo, "Nombre: %s", nombre);
    fprintf(archivo, "Edad: %d\n", edad);

    fclose(archivo);

    archivo = fopen("datos.txt", "r");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo para leer.\n");
        return 1;
    }

    printf("\nContenido del archivo:\n");

    char linea[100];
    while (fgets(linea, sizeof(linea), archivo)) {
        printf("%s", linea);
    }

    fclose(archivo);

    return 0;
}
