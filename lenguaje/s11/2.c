#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define M_PI 3.14
void usarPrintf() {
    printf("Ejemplo de uso de printf: Este es un mensaje de ejemplo.\n");
}

void usarScanf() {
    int numero;
    printf("Ejemplo de uso de scanf: Ingrese un numero: ");
    scanf("%d", &numero);
    printf("Numero ingresado: %d\n", numero);
}

void usarGets() {
    char cadena[100];
    printf("Ejemplo de uso de gets: Ingrese una cadena: ");
    gets(cadena);
    printf("Cadena ingresada: %s\n", cadena);
}

void usarPuts() {
    printf("Ejemplo de uso de puts: ");
    puts("Este es un mensaje de ejemplo con puts.");
}

void usarMalloc() {
    int *ptr;
    ptr = (int *)malloc(5 * sizeof(int));
    if (ptr != NULL) {
        printf("Memoria asignada exitosamente usando malloc.\n");
        free(ptr);
    } else {
        printf("Error al asignar memoria.\n");
    }
}

void usarExit() {
    printf("Ejemplo de uso de exit: Saliendo del programa con exit(0)...\n");
    exit(0);
}

void usarAtoi() {
    char numeroCadena[] = "12345";
    int numero = atoi(numeroCadena);
    printf("El numero convertido con atoi es: %d\n", numero);
}

void usarRand() {
    printf("Ejemplo de uso de rand: Numero aleatorio = %d\n", rand() % 100);
}

void usarSqrt() {
    double numero = 16.0;
    printf("La raiz cuadrada de %.2f es: %.2f\n", numero, sqrt(numero));
}

void usarPow() {
    double base = 2.0, exponente = 3.0;
    printf("%.2f elevado a %.2f es: %.2f\n", base, exponente, pow(base, exponente));
}

void usarSin() {
    double angulo = M_PI / 2;
    printf("El seno de 90 grados es: %.2f\n", sin(angulo));
}

void usarCos() {
    double angulo = M_PI;
    printf("El coseno de 180 grados es: %.2f\n", cos(angulo));
}

int main() {
    int opcion;

    do {
        printf("\nMENU DE OPCIONES:\n");
        printf("1. Usar printf (stdio.h)\n");
        printf("2. Usar scanf (stdio.h)\n");
        printf("3. Usar gets (stdio.h)\n");
        printf("4. Usar puts (stdio.h)\n");
        printf("5. Usar malloc (stdlib.h)\n");
        printf("6. Usar exit (stdlib.h)\n");
        printf("7. Usar atoi (stdlib.h)\n");
        printf("8. Usar rand (stdlib.h)\n");
        printf("9. Usar sqrt (math.h)\n");
        printf("10. Usar pow (math.h)\n");
        printf("11. Usar sin (math.h)\n");
        printf("12. Usar cos (math.h)\n");
        printf("13. Salir\n");
        printf("Seleccione una opcion: ");
        scanf("%d", &opcion);

        while(getchar() != '\n');

        switch(opcion) {
            case 1: usarPrintf(); break;
            case 2: usarScanf(); break;
            case 3: usarGets(); break;
            case 4: usarPuts(); break;
            case 5: usarMalloc(); break;
            case 6: usarExit(); break;
            case 7: usarAtoi(); break;
            case 8: usarRand(); break;
            case 9: usarSqrt(); break;
            case 10: usarPow(); break;
            case 11: usarSin(); break;
            case 12: usarCos(); break;
            case 13: printf("Saliendo del programa...\n"); break;
            default: printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while(opcion != 13);

    return 0;
}
