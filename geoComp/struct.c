#include <stdio.h>

struct Producto {
    int codigo;
    char nombre[30];
    float precio;
};

int main() {
    struct Producto producto;

    printf("Ingrese el código del producto:\n");
    scanf("%d", &producto.codigo);

    printf("Ingrese el nombre del producto:\n");
    fgets(producto.nombre, sizeof(producto.nombre), stdin);

    printf("Ingrese el precio del producto:\n");
    scanf("%f", &producto.precio);

    printf("Datos del producto:\n");
    printf("Código: %d\n", producto.codigo);
    printf("Nombre: %s\n", producto.nombre);
    printf("Precio: $%.2f\n", producto.precio);

    return 0;
}
