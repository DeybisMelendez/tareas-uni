// Elaborado por Deybis Antonio Melendez Vargas

package conceptos.s8;

public class Vehiculo {
    private String marca;
    private String modelo;
    private String color;
    private String placa;
    private double tarifa;
    
    public String getMarca() {
        return marca;
    }
    public void setMarca(String ma) {
        marca = ma;
    }
    public String getModelo() {
        return modelo;
    }
    public void setModelo(String mo) {
        modelo = mo;
    }
    public String getColor() {
        return color;
    }
    public void setColor(String co) {
        color = co;
    }
    public String getPlaca() {
        return placa;
    }
    public void setPlaca(String pla) {
        placa = pla;
    }
    public double getTarifa() {
        return tarifa;
    }
    public void setTarifa(double ta) {
        tarifa = ta;
    }

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
        this.tarifa = 0;
    }
    public static void main (String[] args) {
        System.out.println("Metodos Get y Set");
        System.out.println("Fijando y obteniendo los valores de los atributos del objeto vehiculo");
        Vehiculo vehiculo = new Vehiculo();
        vehiculo.setMarca("Toyota");
        System.out.println("La marca es: " + vehiculo.getMarca());
        vehiculo.setModelo("Corolla");
        System.out.println("El modelo es: " + vehiculo.getModelo());
        vehiculo.setColor("Rojo");
        System.out.println("El color es: " + vehiculo.getColor());
        vehiculo.setPlaca("M123-456");
        System.out.println("La placa es: " + vehiculo.getPlaca());
        vehiculo.setTarifa(125.55);
        System.out.println("La tarifa es: " + vehiculo.getTarifa());
    }
}