// Elaborado por Deybis Antonio Melendez Vargas

package conceptos.s7;

public class Vehiculo {
    public String marca;
    public String modelo;
    public String color;
    public String placa;
    public double tarifa;
    
    public Vehiculo(String ma, String mo, String co, String pla, double ta) {
        this.marca = ma;
        this.modelo = mo;
        this.color = co;
        this.placa = pla;
        this.tarifa = ta;
    }
    public Vehiculo() {
        this.marca = "";
        this.modelo = "";
        this.color = "";
        this.placa = "";
    }
    public static void main (String[] args) {
        //Vehiculo vehiculo1 = new Vehiculo();
        Vehiculo vehiculo2 = new Vehiculo("Toyota", "Corolla", "Rojo", "M123-456", 125.55);
        System.out.println("La marca del vehiculo2 es: " + vehiculo2.marca);
        System.out.println("El modelo del vehiculo2 es: " + vehiculo2.modelo);
        System.out.println("El color del vehiculo2 es: " + vehiculo2.color);
        System.out.println("La placa del vehiculo2 es: " + vehiculo2.placa);
        System.out.println("La tarifa del vehiculo2 es: " + vehiculo2.tarifa);
    }
}