package poo.sem7;
import java.util.Random;

public class GenerarMatriz {
    public static void main(String[] args) {
        int[][] matriz = new int[10][10];
        Random random = new Random();

        for (int fila = 0; fila < 10; fila++) {
            for (int columna = 0; columna < 10; columna++) {
                matriz[fila][columna] = random.nextInt(100); // Números entre 0 y 99
            }
        }

        System.out.println("Matriz generada:");
        for (int fila = 0; fila < 10; fila++) {
            for (int columna = 0; columna < 10; columna++) {
                System.out.printf("%3d ", matriz[fila][columna]);
            }
            System.out.println();
        }
    }
}
