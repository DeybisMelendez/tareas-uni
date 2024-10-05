#include <stdio.h>

int longitud_cadena(char *cadena) {
    int longitud = 0;
    
    while (*(cadena + longitud) != '\0') {
        longitud++;
    }
    
    return longitud;
}

int main(void) {
    char cadena[256];
    
    printf("Introduce una cadena de caracteres:\n");
    fgets(cadena, sizeof(cadena), stdin);

    int longitud = longitud_cadena(cadena);
    
    printf("La longitud de la cadena es: %d\n", longitud - 1);  // Resta 1 para no contar el salto de línea

    return 0;
}
