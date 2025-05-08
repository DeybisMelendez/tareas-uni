package poo.sem9;

public class Empleado {
    private double horasTrabajadas = 0;
    private double sueldoHora = 5;

    public Empleado() {
        // Los valores iniciales ya están establecidos
    }

    public void setHorasTrabajadas(double horas) {
        if (horas >= 0) {
            this.horasTrabajadas = horas;
        } else {
            System.out.println("Error: las horas no pueden ser negativas.");
        }
    }

    public double getHorasTrabajadas() {
        return horasTrabajadas;
    }

    public void setSueldoHora(double sueldo) {
        if (sueldo >= 5) {
            this.sueldoHora = sueldo;
        } else {
            System.out.println("Error: el sueldo por hora no puede ser menor a 5.");
        }
    }

    public double getSueldoHora() {
        return sueldoHora;
    }

    public double calcularSalarioBase() {
        return horasTrabajadas * sueldoHora;
    }

    public double calcularImpuestos() {
        return calcularSalarioBase() * 0.10;
    }

    public double calcularSalarioNeto() {
        return calcularSalarioBase() - calcularImpuestos();
    }
}
