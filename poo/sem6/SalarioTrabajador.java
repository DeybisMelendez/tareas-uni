import java.util.Scanner;

public class SalarioTrabajador {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);

        System.out.print("Ingrese el número de horas trabajadas: ");
        double horasTrabajadas = scanner.nextDouble();

        System.out.print("Ingrese el pago por hora: ");
        double pagoPorHora = scanner.nextDouble();

        double salarioBruto = horasTrabajadas * pagoPorHora;
        double descuento = salarioBruto * 0.20;
        double salarioNeto = salarioBruto - descuento;

        System.out.println("--- Resultado ---");
        System.out.printf("Salario Bruto: %.2f\n", salarioBruto);
        System.out.printf("Descuento (20%%): %.2f\n", descuento);
        System.out.printf("Salario Neto: %.2f\n", salarioNeto);
        scanner.close();
    }
}
