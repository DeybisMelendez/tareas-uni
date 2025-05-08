package poo.sem9;

public class Conversion {
    private double grados;

    public void establecerGrados(double grados) {
        this.grados = grados;
    }

    public double obtenerGrados() {
        return grados;
    }

    public double convertirCF() {
        return (grados * 9 / 5) + 32;
    }

    public double convertirFC() {
        return (grados - 32) * 5 / 9;
    }
}
