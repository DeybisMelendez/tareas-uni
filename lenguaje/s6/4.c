#include <stdio.h>

void imprimir_reversa(char *cadena) {
    int longitud = 0;
    while (*(cadena + longitud) != '\0') {
        longitud++;
    }
    
    for (int i = longitud - 1; i >= 0; i--) {
        printf("%c", *(cadena + i));
    }
    printf("\n");
}

int main(void) {
    char cadena[256]; // Tamaño máximo de la cadena
    
    printf("Introduce una cadena de caracteres:\n");
    fgets(cadena, sizeof(cadena), stdin);
    
    printf("La cadena al revés es: ");
    imprimir_reversa(cadena);
    
    return 0;
}
