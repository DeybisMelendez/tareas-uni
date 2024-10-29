public class Vehiculo {
    private String marca;
    private String modelo;
    private String color;
    private String placa;
    
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

    public Vehiculo(String ma, String mo, String co, String pla) {
        this.marca = ma;
        this.modelo = mo;
        this.color = co;
        this.placa = pla;
    }
    public Vehiculo() {
        this.marca = "";
        this.modelo = "";
        this.color = "";
        this.placa = "";
    }
    public void mostrarInfo() {
        System.out.println("Marca: " + marca + ", Modelo: " + modelo + ", Color: " + color + ", Placa: " + placa);
    }
}
