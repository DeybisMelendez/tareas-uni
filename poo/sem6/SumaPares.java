import java.util.Scanner;

public class SumaPares {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int n1, n2;

        do {
            System.out.print("Ingrese el primer número (positivo): ");
            n1 = scanner.nextInt();

            System.out.print("Ingrese el segundo número (positivo y distinto al primero): ");
            n2 = scanner.nextInt();

            if (n1 <= 0 || n2 <= 0) {
                System.out.println("Ambos números deben ser positivos.");
            } else if (n1 == n2) {
                System.out.println("Los números no deben ser iguales.");
            }

        } while (n1 <= 0 || n2 <= 0 || n1 == n2);

        if (n1 > n2) {
            int temp = n1;
            n1 = n2;
            n2 = temp;
        }

        int suma = 0;
        for (int i = n1 + 1; i < n2; i++) {
            if (i % 2 == 0) {
                suma += i;
            }
        }

        System.out.println("La suma de los números pares entre " + n1 + " y " + n2 + " es: " + suma);
        scanner.close();
    }
}
