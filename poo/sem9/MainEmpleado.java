package poo.sem9;

import java.util.Scanner;

public class MainEmpleado {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        Empleado empleado = new Empleado();

        System.out.println("=== Cálculo de salario semanal ===");
        System.out.print("Ingrese las horas trabajadas: ");
        double horas = scanner.nextDouble();
        empleado.setHorasTrabajadas(horas);

        System.out.print("Ingrese el sueldo por hora (mínimo 5): ");
        double sueldo = scanner.nextDouble();
        empleado.setSueldoHora(sueldo);

        double salarioBase = empleado.calcularSalarioBase();
        double impuestos = empleado.calcularImpuestos();
        double salarioNeto = empleado.calcularSalarioNeto();

        System.out.printf("Salario base: $%.2f%n", salarioBase);
        System.out.printf("Impuestos (10%%): $%.2f%n", impuestos);
        System.out.printf("Salario neto: $%.2f%n", salarioNeto);

        scanner.close();
    }
}
