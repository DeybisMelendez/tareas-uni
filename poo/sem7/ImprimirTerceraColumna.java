package poo.sem7;
public class ImprimirTerceraColumna {
    public static void main(String[] args) {
        int[][] matriz = {
            {1, 2, 3, 4},
            {5, 6, 7, 8},
            {9, 10, 11, 12},
            {13, 14, 15, 16}
        };

        System.out.println("Elementos de la tercera columna:");
        for (int i = 0; i < matriz.length; i++) {
            System.out.println(matriz[i][2]);
        }
    }
}
