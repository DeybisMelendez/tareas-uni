public class Camion extends Vehiculo {
    private double capacidadCarga;

    public Camion(String marca, String modelo, String color, String placa, double capacidadCarga) {
        super(marca, modelo, color, placa);
        this.capacidadCarga = capacidadCarga;
    }

    public double getCapacidadCarga() {
        return capacidadCarga;
    }

    public void setCapacidadCarga(double capacidadCarga) {
        this.capacidadCarga = capacidadCarga;
    }

    public void mostrarInfoCamion() {
        mostrarInfo();
        System.out.println("Capacidad de carga: " + capacidadCarga + " toneladas");
    }
}
