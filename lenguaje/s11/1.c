#include <stdio.h>

void areaCuadrado() {
    float lado;
    printf("Ingrese el lado del cuadrado:\n");
    scanf("%f", &lado);
    printf("El area del cuadrado es: %.2f\n", lado * lado);
}

void areaRectangulo() {
    float largo, ancho;
    printf("Ingrese el largo del rectangulo:\n");
    scanf("%f", &largo);
    printf("Ingrese el ancho del rectangulo:\n");
    scanf("%f", &ancho);
    printf("El area del rectangulo es: %.2f\n", largo * ancho);
}

void areaTriangulo() {
    float base, altura;
    printf("Ingrese la base del triangulo:\n");
    scanf("%f", &base);
    printf("Ingrese la altura del triangulo:\n");
    scanf("%f", &altura);
    printf("El area del triangulo es: %.2f\n", (base * altura) / 2);
}

int main() {
    int opcion;
    
    do {
        printf("\nMenu de areas:\n");
        printf("1. Area de un cuadrado\n");
        printf("2. Area de un rectangulo\n");
        printf("3. Area de un triangulo\n");
        printf("4. Salir\n");
        printf("Opcion: ");
        scanf("%d", &opcion);

        switch(opcion) {
            case 1:
                areaCuadrado();
                break;
            case 2:
                areaRectangulo();
                break;
            case 3:
                areaTriangulo();
                break;
            case 4:
                printf("Saliendo del programa...\n");
                break;
            default:
                printf("Opcion no valida. Intente de nuevo.\n");
        }
    } while(opcion != 4);

    return 0;
}
