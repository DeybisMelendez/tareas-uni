package poo.sem9;
import java.util.Scanner;

public class Estacionamiento {

    public static double calcularCargos(double horas) {
        double cargoMinimo = 2.00;
        double cargoMaximo = 10.00;

        if (horas <= 3) {
            return cargoMinimo;
        } else {
            double cargo = cargoMinimo + Math.ceil(horas - 3) * 0.50;
            return Math.min(cargo, cargoMaximo);
        }
    }

    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        double total = 0.0;
        int cliente = 1;

        while (true) {
            System.out.print("Ingrese horas de estacionamiento del cliente " + cliente + " (o -1 para terminar): ");
            double horas = scanner.nextDouble();

            if (horas == -1) {
                break;
            }

            if (horas < 0 || horas > 24) {
                System.out.println("Error: las horas deben estar entre 0 y 24.");
                continue;
            }

            double cargo = calcularCargos(horas);
            System.out.printf("Cargo para el cliente %d: $%.2f%n", cliente, cargo);

            total += cargo;
            cliente++;
        }

        System.out.printf("Total de cargos por todos los clientes: $%.2f%n", total);
        scanner.close();
    }
}
