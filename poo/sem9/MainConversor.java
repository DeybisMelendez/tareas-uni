package poo.sem9;

import java.util.Scanner;

public class MainConversor {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Conversion conversor = new Conversion();

        System.out.println("=== Conversor de Temperatura ===");
        System.out.print("Ingrese el valor de los grados: ");
        double valor = scanner.nextDouble();
        conversor.establecerGrados(valor);

        System.out.println("¿Qué conversión desea realizar?");
        System.out.println("1. Centígrados a Fahrenheit");
        System.out.println("2. Fahrenheit a Centígrados");
        System.out.print("Seleccione una opción (1 o 2): ");
        int opcion = scanner.nextInt();

        if (opcion == 1) {
            double resultado = conversor.convertirCF();
            System.out.printf("%.2f °C = %.2f °F%n", valor, resultado);
        } else if (opcion == 2) {
            double resultado = conversor.convertirFC();
            System.out.printf("%.2f °F = %.2f °C%n", valor, resultado);
        } else {
            System.out.println("Opción inválida.");
        }

        scanner.close();
    }
}
