public class App {
    public static void main(String[] args) {
        Carro miCarro = new Carro("Toyota", "Corolla", "Rojo", "M123-456",4);
        System.out.println("Información del Carro:");
        miCarro.mostrarInfoCarro();

        Camion miCamion = new Camion("Toyota", "Corolla", "Rojo", "M123-456", 18.0);
        System.out.println("\nInformación del Camion:");
        miCamion.mostrarInfoCamion();
    }
}
