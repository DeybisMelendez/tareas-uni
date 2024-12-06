#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void verificarNumero(void);
void calcularRaicesCuadraticas(void);
void calcularSalarioNeto(void);
void operacionesConTresNumeros(void);
void calcularLeyDeOhm(void);
void operacionesBasicas(void);
void calcularAreaYLongitudCirculo(void);
void calcularAreasFiguras(void);
void mostrarMenu(void);
void continuar(void);

#define PI 3.1416

int main(void) {
    int opcion;

    do {
        mostrarMenu();
        printf("Seleccione una opción: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                verificarNumero();
                break;
            case 2:
                calcularRaicesCuadraticas();
                break;
            case 3:
                calcularSalarioNeto();
                break;
            case 4:
                operacionesConTresNumeros();
                break;
            case 5:
                calcularLeyDeOhm();
                break;
            case 6:
                operacionesBasicas();
                break;
            case 7:
                calcularAreaYLongitudCirculo();
                break;
            case 8:
                calcularAreasFiguras();
                break;
            case 0:
                printf("Saliendo del programa...\n");
                exit(0);
            default:
                printf("Opción no válida. Intente de nuevo.\n");
                break;
        }
        continuar();
    } while (1);

    return 0;
}

void mostrarMenu(void) {
    printf("\n----- Menú de Opciones -----\n");
    printf("1. Verificar si un número es positivo, negativo o cero.\n");
    printf("2. Calcular raíces de una ecuación cuadrática.\n");
    printf("3. Calcular salario neto de un empleado.\n");
    printf("4. Operaciones con tres números (promedio, mayor, menor, pares/ímpares).\n");
    printf("5. Calcular usando la ley de Ohm (V=I*R).\n");
    printf("6. Operaciones básicas entre dos números.\n");
    printf("7. Calcular área y longitud de un círculo.\n");
    printf("8. Calcular áreas de un rectángulo, triángulo rectángulo y trapecio.\n");
    printf("0. Salir del programa.\n");
}

void continuar(void) {
    char opcion;
    printf("\n¿Desea continuar? (s/n):\n");
    scanf("%c", &opcion);
    if (opcion == 'n' || opcion == 'N') {
        exit(0);
    }
}

void verificarNumero(void) {
    float numero;
    printf("\nIngrese un número real:\n");
    scanf("%f", &numero);

    if (numero > 0) {
        printf("El número %.2f es positivo.\n", numero);
    } else if (numero < 0) {
        printf("El número %.2f es negativo.\n", numero);
    } else {
        printf("El número es cero.\n");
    }
}

void calcularRaicesCuadraticas(void) {
    float a, b, c, discriminante, raiz1, raiz2;
    printf("\nIngrese el valor de a:\n");
    scanf("%f", &a);
    printf("Ingrese el valor de b:\n");
    scanf("%f", &b);
    printf("Ingrese el valor de c:\n");
    scanf("%f", &c);

    discriminante = b * b - 4 * a * c;

    if (discriminante > 0) {
        raiz1 = (-b + sqrt(discriminante)) / (2 * a);
        raiz2 = (-b - sqrt(discriminante)) / (2 * a);
        printf("Las raíces son reales y diferentes.\n");
        printf("Raíz 1 = %.2f\n", raiz1);
        printf("Raíz 2 = %.2f\n", raiz2);
    } else if (discriminante == 0) {
        raiz1 = -b / (2 * a);
        printf("Las raíces son reales e iguales.\n");
        printf("Raíz = %.2f\n", raiz1);
    } else {
        printf("Las raíces son complejas e imaginarias.\n");
    }
}

void calcularSalarioNeto(void) {
    float salarioBasico, bonificacion, descuento, salarioNeto;
    int categoria;

    printf("\nIngrese el salario básico del empleado:\n");
    scanf("%f", &salarioBasico);
    printf("Ingrese la categoría del empleado (1 a 4):\n");
    scanf("%d", &categoria);

    switch (categoria) {
        case 1:
            bonificacion = salarioBasico * 0.15;
            descuento = salarioBasico * 0.04;
            break;
        case 2:
            bonificacion = salarioBasico * 0.13;
            descuento = salarioBasico * 0.03;
            break;
        case 3:
            bonificacion = salarioBasico * 0.12;
            descuento = salarioBasico * 0.02;
            break;
        case 4:
            bonificacion = salarioBasico * 0.095;
            descuento = 0;
            break;
        default:
            printf("Categoría inválida.\n");
            return;
    }

    salarioNeto = salarioBasico + bonificacion - descuento;
    printf("Salario neto del empleado: %.2f\n", salarioNeto);
}

void operacionesConTresNumeros(void) {
    int num1, num2, num3, pares = 0, impares = 0;
    printf("\nIngrese el primer numero entero:\n");
    scanf("%d", &num1);
    printf("\nIngrese el segundo numero entero:\n");
    scanf("%d", &num2);
    printf("\nIngrese el tercer numero entero:\n");
    scanf("%d", &num3);

    float promedio = (num1 + num2 + num3) / 3.0;
    int mayor = (num1 > num2 && num1 > num3) ? num1 : (num2 > num3 ? num2 : num3);
    int menor = (num1 < num2 && num1 < num3) ? num1 : (num2 < num3 ? num2 : num3);

    if (num1 % 2 == 0) pares++; else impares++;
    if (num2 % 2 == 0) pares++; else impares++;
    if (num3 % 2 == 0) pares++; else impares++;

    printf("Promedio: %.2f\n", promedio);
    printf("Mayor: %d\n", mayor);
    printf("Menor: %d\n", menor);
    printf("Pares: %d, Impares: %d\n", pares, impares);
}

void calcularLeyDeOhm(void) {
    float V, I, R;
    int opcion;
    printf("\n¿Qué desea calcular? (1: V, 2: I, 3: R):\n");
    scanf("%d", &opcion);

    if (opcion == 1) {
        printf("Ingrese I:\n");
        scanf("%f", &I);
        printf("Ingrese R:\n");
        scanf("%f", &R);
        V = I * R;
        printf("V = %.2f\n", V);
    } else if (opcion == 2) {
        printf("Ingrese V:\n");
        scanf("%f", &V);
        printf("Ingrese R:\n");
        scanf("%f", &R);
        I = V / R;
        printf("I = %.2f\n", I);
    } else if (opcion == 3) {
        printf("Ingrese V:\n");
        scanf("%f", &V);
        printf("Ingrese I:\n");
        scanf("%f", &I);
        R = V / I;
        printf("R = %.2f\n", R);
    } else {
        printf("Opción inválida.\n");
    }
}

void operacionesBasicas(void) {
    float num1, num2;
    printf("\nIngrese el primer número:\n");
    scanf("%f", &num1);
    printf("\nIngrese el segundo número:\n");
    scanf("%f", &num2);

    printf("Suma: %.2f\n", num1 + num2);
    printf("Resta: %.2f\n", num1 - num2);
    printf("Multiplicación: %.2f\n", num1 * num2);
    if (num2 != 0)
        printf("División: %.2f\n", num1 / num2);
    else
        printf("División no permitida (divisor es cero).\n");
}

void calcularAreaYLongitudCirculo(void) {
    float radio;
    printf("\nIngrese el radio del círculo:\n");
    scanf("%f", &radio);

    printf("Área: %.2f\n", PI * pow(radio, 2));
    printf("Longitud: %.2f\n", 2 * PI * radio);
}

void calcularAreasFiguras(void) {
    float base, altura, lado1, lado2, baseMayor, baseMenor;
    printf("\nIngrese la base de un rectángulo:\n");
    scanf("%f", &base);
    printf("\nIngrese la altura de un rectángulo:\n");
    scanf("%f", &altura);
    printf("\nÁrea del rectángulo: %.2f\n", base * altura);

    printf("Ingrese la base de un triángulo rectángulo: ");
    scanf("%f", &base);
    printf("Ingrese la altura de un triángulo rectángulo: ");
    scanf("%f", &altura);
    printf("\nÁrea del triángulo: %.2f\n", (base * altura) / 2);

    printf("Ingrese la base mayor de un trapecio:\n");
    scanf("%f", &baseMayor);
    printf("Ingrese la base mayor, base menor y altura de un trapecio:\n");
    scanf("%f", &baseMenor);
    printf("Ingrese la base mayor, base menor y altura de un trapecio:\n");
    scanf("%f", &altura);
    printf("\nÁrea del trapecio: %.2f\n", ((baseMayor + baseMenor) * altura) / 2);
}
