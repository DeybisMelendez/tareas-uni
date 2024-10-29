public class Carro extends Vehiculo {
    private int numPuertas;

    public Carro(String marca, String modelo, String color, String placa, int numPuertas) {
        super(marca, modelo, color, placa);
        this.numPuertas = numPuertas;
    }

    public int getNumPuertas() {
        return numPuertas;
    }

    public void setNumPuertas(int numPuertas) {
        this.numPuertas = numPuertas;
    }

    public void mostrarInfoCarro() {
        mostrarInfo();
        System.out.println("Número de puertas: " + numPuertas);
    }
}
