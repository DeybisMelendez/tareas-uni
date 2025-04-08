import java.util.Scanner;

public class AreaFiguras {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        int opcion;
        
        do {
            System.out.println("=== MENÚ DE OPCIONES ===");
            System.out.println("1. Área del círculo");
            System.out.println("2. Área del triángulo");
            System.out.println("3. Área del cuadrado");
            System.out.println("4. Salir");
            System.out.print("Elige una opción: ");
            opcion = scanner.nextInt();

            switch (opcion) {
                case 1:
                    System.out.print("Ingresa el radio del círculo: ");
                    double radio = scanner.nextDouble();
                    double areaCirculo = Math.PI * Math.pow(radio, 2);
                    System.out.printf("Área del círculo: %.2f\n", areaCirculo);
                    break;

                case 2:
                    System.out.print("Ingresa la base del triángulo: ");
                    double base = scanner.nextDouble();
                    System.out.print("Ingresa la altura del triángulo: ");
                    double altura = scanner.nextDouble();
                    double areaTriangulo = (base * altura) / 2;
                    System.out.printf("Área del triángulo: %.2f\n", areaTriangulo);
                    break;

                case 3:
                    System.out.print("Ingresa el lado del cuadrado: ");
                    double lado = scanner.nextDouble();
                    double areaCuadrado = lado * lado;
                    System.out.printf("Área del cuadrado: %.2f\n", areaCuadrado);
                    break;

                case 4:
                    System.out.println("Saliendo del programa...");
                    break;

                default:
                    System.out.println("Opción inválida. Intenta de nuevo.");
            }

        } while (opcion != 4);

        scanner.close();
    }
}
