package poo.sem9;

public class PruebaFactura {
    public static void main(String[] args) {
        Factura factura1 = new Factura("1234", "Martillo de acero", 3, 10.50);

        System.out.println("Número de pieza: " + factura1.getNumeroPieza());
        System.out.println("Descripción: " + factura1.getDescripcionPieza());
        System.out.println("Cantidad: " + factura1.getCantidad());
        System.out.println("Precio por artículo: $" + factura1.getPrecioPorArticulo());
        System.out.println("Monto total de la factura: $" + factura1.obtenerMontoFactura());

        System.out.println("\n--- Factura con valores inválidos ---");
        
        Factura factura2 = new Factura("5678", "Caja de clavos", -5, -2.50);
        System.out.println("Cantidad corregida: " + factura2.getCantidad());
        System.out.println("Precio corregido: $" + factura2.getPrecioPorArticulo());
        System.out.println("Monto total: $" + factura2.obtenerMontoFactura());
    }
}
