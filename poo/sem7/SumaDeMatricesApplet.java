package poo.sem7;

import java.applet.Applet;
import java.awt.Graphics;
import java.util.Random;

/* <applet code="SumaDeMatricesApplet.class" width="600" height="400"></applet> */
public class SumaDeMatricesApplet extends Applet {
    int[][] matrizA = new int[3][3];
    int[][] matrizB = new int[3][3];
    int[][] matrizSuma = new int[3][3];

    public void init() {
        Random random = new Random();
        
        // Llenar las matrices
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                matrizA[i][j] = random.nextInt(10);
                matrizB[i][j] = random.nextInt(10);
                matrizSuma[i][j] = matrizA[i][j] + matrizB[i][j];
            }
        }
    }

    public void paint(Graphics g) {
        g.drawString("Matriz A:", 20, 20);
        dibujarMatriz(g, matrizA, 20, 40);

        g.drawString("Matriz B:", 220, 20);
        dibujarMatriz(g, matrizB, 220, 40);

        g.drawString("Matriz Suma:", 420, 20);
        dibujarMatriz(g, matrizSuma, 420, 40);
    }

    private void dibujarMatriz(Graphics g, int[][] matriz, int x, int y) {
        for (int i = 0; i < matriz.length; i++) {
            for (int j = 0; j < matriz[i].length; j++) {
                g.drawString(Integer.toString(matriz[i][j]), x + j * 20, y + i * 20);
            }
        }
    }
}

