#include <stdio.h>

#define MAX_NOMBRE 50

double ConvertirKgALibras(double kg) {
    return kg * 2.20462;
}

int main(void) {
    char Nombre[MAX_NOMBRE];
    int Edad;
    double PesoKg;
    double Altura;

    printf("Ingrese el nombre del deportista:\n");
    scanf("%s", Nombre);

    printf("Ingrese la edad del deportista:\n");
    scanf("%d", &Edad);

    printf("Ingrese el peso del deportista (en kg):\n");
    scanf("%lf", &PesoKg);

    printf("Ingrese la altura del deportista (en metros):\n");
    scanf("%lf", &Altura);

    printf("\nInformación del deportista:\n");
    printf("Nombre: %s\n", Nombre);
    printf("Edad: %d años\n", Edad);
    printf("Peso: %.2f kg (%.2f libras)\n", PesoKg, ConvertirKgALibras(PesoKg));
    printf("Altura: %.2f metros\n", Altura);

    return 0;
}
