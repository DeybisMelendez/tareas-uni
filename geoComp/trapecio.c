#include <stdio.h>

int main(void) {
    float lado1, lado2, lado3, lado4, altura;
    float perimetro, area;

    printf("Ingrese la longitud del lado 1 (base menor):\n");
    scanf("%f", &lado1);

    printf("Ingrese la longitud del lado 2 (base mayor):\n");
    scanf("%f", &lado2);

    printf("Ingrese la longitud del lado 3 (lado no paralelo):\n");
    scanf("%f", &lado3);

    printf("Ingrese la longitud del lado 4 (lado no paralelo):\n");
    scanf("%f", &lado4);

    printf("Ingrese la altura del trapecio:\n");
    scanf("%f", &altura);

    perimetro = lado1 + lado2 + lado3 + lado4;

    area = ((lado1 + lado2) * altura) / 2;

    printf("El perímetro del trapecio es: %.2f unidades\n", perimetro);
    printf("El área del trapecio es: %.2f unidades cuadradas\n", area);

    return 0;
}
