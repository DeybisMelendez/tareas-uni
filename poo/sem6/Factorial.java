import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int numero;

        do {
            System.out.print("Ingrese un número positivo (incluye el 0): ");
            numero = scanner.nextInt();

            if (numero < 0) {
                System.out.println("El número debe ser positivo. Intente de nuevo.");
            }
        } while (numero < 0);

        long factorial = 1;
        for (int i = 1; i <= numero; i++) {
            factorial *= i;
        }

        System.out.println("El factorial de " + numero + " es: " + factorial);
        scanner.close();
    }
}
