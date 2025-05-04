package poo.sem7;
import java.util.Scanner;

public class Matriz10x10 {
    public static void main(String[] args) {
        int[][] matriz = new int[10][10];
        Scanner scanner = new Scanner(System.in);

        System.out.println("Ingrese los valores para llenar la matriz 10x10:");

        for (int fila = 0; fila < 10; fila++) {
            for (int columna = 0; columna < 10; columna++) {
                System.out.print("Elemento [" + fila + "][" + columna + "]: ");
                matriz[fila][columna] = scanner.nextInt();
            }
        }

        System.out.println("\nLa matriz ingresada es:");
        for (int fila = 0; fila < 10; fila++) {
            for (int columna = 0; columna < 10; columna++) {
                System.out.print(matriz[fila][columna] + "\t");
            }
            System.out.println();
        }

        scanner.close();
    }
}
