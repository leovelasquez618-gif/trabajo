#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int edadPaciente;
    int opcionServicio;
    double costoServicio = 0.0;
    double montoDescuentoAdultoMayor = 0.0;
    double montoRecargoNocturno = 0.0;
    int esHorarioNocturno = 0;
    double totalPagar = 0.0;

    cout << "CALCULADORA DE TRIAJE Y COSTOS DE CONSULTA MEDICA" << endl;
    cout << "Ingrese su edad: ";
    cin >> edadPaciente;

    cout << "Es horario de emergencia nocturna? (1 = Si, 0 = No): " << endl;
    cin >> esHorarioNocturno;

    if (edadPaciente <= 0) {
        cout << "ERROR, la edad debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Seleccione el tipo de servicio" << endl;
    cout << "1: Medicina General ($30.00)" << endl;
    cout << "2: Pediatria ($45.00)" << endl;
    cout << "3: Cardiologia ($70.00)" << endl;
    cout << "4: Traumatologia ($60.00)" << endl;
    cout << "OPCION: ";
    cin >> opcionServicio;

    switch (opcionServicio) {
        case 1:
            costoServicio = 30.00;
            break;
        case 2:
            costoServicio = 45.00;
            break;
        case 3:
            costoServicio = 70.00;
            break;
        case 4:
            costoServicio = 60.00;
            break;
        default:
            cout << "ERROR: Opcion del servicio no valida" << endl;
            return 1;
    }

    if (opcionServicio == 2 && edadPaciente >= 18) {
        cout << "El paciente tiene 18 anos o mas, debe ser atendido en Medicina General." << endl;
    }

    if (edadPaciente >= 65) {
        montoDescuentoAdultoMayor = costoServicio * 0.25;
    }

    if (esHorarioNocturno == 1) {
        montoRecargoNocturno = costoServicio * 0.20;
    }

    totalPagar = (costoServicio - montoDescuentoAdultoMayor) + montoRecargoNocturno;

    cout << fixed << setprecision(2);
    cout << "Costo del servicio: $" << costoServicio << endl;
    cout << "Descuento aplicado: $" << montoDescuentoAdultoMayor << endl;
    cout << "Recargo nocturno: $" << montoRecargoNocturno << endl;
    cout << "Monto final a pagar: $" << totalPagar << endl;

    return 0;
}