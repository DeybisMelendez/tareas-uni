#include <stdio.h>
#include <string.h>

struct Especialidades {
    int codigo_especialidad;
    char especialidad[50];
};

struct Medicos {
    int codigo_doctor;
    char nombre[50];
    int codigo_especialidad;  // Referencia a Especialidades
    char direccion[100];
    char telefono[15];
};

struct Pacientes {
    int codigo_paciente;
    char fecha_nacimiento[11]; // Formato "DD/MM/AAAA"
    char direccion[100];
    char telefono[15];
    int medico_cabecera; // Referencia al código del doctor en Medicos
};

int main() {
    // Ejemplo de inicialización para un conjunto de especialidades
    struct Especialidades especialidades[] = {
        {1, "Cardiología"},
        {2, "Neurología"},
        {3, "Pediatría"}
    };

    // Ejemplo de inicialización para un conjunto de médicos
    struct Medicos medicos[] = {
        {101, "Dr. Juan Pérez", 1, "Calle A, 123", "555-1234"},
        {102, "Dr. Ana López", 2, "Calle B, 456", "555-5678"},
        {103, "Dr. Luis Martínez", 3, "Calle C, 789", "555-9101"}
    };

    // Ejemplo de inicialización para un conjunto de pacientes
    struct Pacientes pacientes[] = {
        {1001, "15/05/1990", "Av. Siempre Viva, 742", "555-1122", 101},
        {1002, "20/08/1985", "Calle Falsa, 123", "555-3344", 102},
        {1003, "12/12/2000", "Calle Real, 456", "555-5566", 103}
    };

    // Imprimir la información de los pacientes con sus médicos y especialidades
    for (int i = 0; i < 3; i++) {
        printf("Paciente %d:\n", pacientes[i].codigo_paciente);
        printf("  Fecha de nacimiento: %s\n", pacientes[i].fecha_nacimiento);
        printf("  Dirección: %s\n", pacientes[i].direccion);
        printf("  Teléfono: %s\n", pacientes[i].telefono);

        // Buscar el médico de cabecera del paciente
        for (int j = 0; j < 3; j++) {
            if (pacientes[i].medico_cabecera == medicos[j].codigo_doctor) {
                printf("  Médico de cabecera: %s\n", medicos[j].nombre);
                printf("  Dirección del médico: %s\n", medicos[j].direccion);
                printf("  Teléfono del médico: %s\n", medicos[j].telefono);

                // Buscar la especialidad del médico
                for (int k = 0; k < 3; k++) {
                    if (medicos[j].codigo_especialidad == especialidades[k].codigo_especialidad) {
                        printf("  Especialidad del médico: %s\n", especialidades[k].especialidad);
                        break;
                    }
                }
                break;
            }
        }
        printf("\n");
    }

    return 0;
}