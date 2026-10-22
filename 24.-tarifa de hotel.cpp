#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int numeroNoches = 0;
    int numeroHuespedes = 0;
    int opcionTipoHabitacion = 0;
    int opcionPlanAlimentacion = 0;
    double costoBaseHabitacion = 0.0;
    double montoDescuento = 0.0;
    double montoRecargoHuespedes = 0.0;
    double costoAlimentacionPorNoche = 0.0;
    double subtotalReserva = 0.0;
    double montoTotalFinal = 0.0;

    cout << "TARIFICADOR DE RESERVAS DE HOTEL" << endl;

    cout << "Ingrese el numero de noches de estadia: ";
    cin >> numeroNoches;

    if (numeroNoches <= 0) {
        cout << "ERROR, el numero de noches debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Ingrese el numero de huespedes: ";
    cin >> numeroHuespedes;

    if (numeroHuespedes < 1) {
        cout << "ERROR, el numero de huespedes debe ser al menos 1" << endl;
        return 1;
    }

    cout << "Plan de alimentacion (1 = Solo desayuno, 2 = Pension Completa: Almuerzo y Cena): " << endl;
    cin >> opcionPlanAlimentacion;

    if (opcionPlanAlimentacion != 1 && opcionPlanAlimentacion != 2) {
        cout << "ERROR: plan de alimentacion no valido" << endl;
        return 1;
    }

    cout << "Seleccione el tipo de habitacion" << endl;
    cout << "1: Habitacion Estandar (S/.50.00 por noche)" << endl;
    cout << "2: Habitacion Doble (S/.80.00 por noche)" << endl;
    cout << "3: Suite Ejecutiva (S/.140.00 por noche)" << endl;
    cout << "OPCION: ";
    cin >> opcionTipoHabitacion;

    switch (opcionTipoHabitacion) {
        case 1:
            costoBaseHabitacion = 50.00;
            break;
        case 2:
            costoBaseHabitacion = 80.00;
            break;
        case 3:
            costoBaseHabitacion = 140.00;
            break;
        default:
            cout << "ERROR: tipo de habitacion no valida" << endl;
            return 1;
    }

    if (opcionTipoHabitacion == 1 && numeroHuespedes > 1) {
        montoRecargoHuespedes = (numeroHuespedes - 1) * 15;
    }
    if (opcionTipoHabitacion == 2 && numeroHuespedes > 2) {
        montoRecargoHuespedes = (numeroHuespedes - 2) * 15;
    }
    if (opcionTipoHabitacion == 3 && numeroHuespedes > 3) {
        montoRecargoHuespedes = (numeroHuespedes - 3) * 15;
    }

    if (opcionPlanAlimentacion == 2) {
        costoAlimentacionPorNoche = 25 * numeroHuespedes;
    } else if (opcionPlanAlimentacion == 1) {
        costoAlimentacionPorNoche = 0;
    }

    subtotalReserva = ((costoBaseHabitacion + costoAlimentacionPorNoche) + montoRecargoHuespedes) * numeroNoches;

    if (numeroNoches > 5) {
        montoDescuento = subtotalReserva * 0.12;
    }

    montoTotalFinal = subtotalReserva - montoDescuento;

    cout << fixed << setprecision(2);
    cout << "--------------- Desglose ---------------" << endl;

    if (opcionTipoHabitacion == 1) {
        cout << "Tipo de habitacion : Habitacion Estandar " << endl;
    }
    if (opcionTipoHabitacion == 2) {
        cout << "Tipo de habitacion : Habitacion Doble " << endl;
    }
    if (opcionTipoHabitacion == 3) {
        cout << "Tipo de habitacion : Suite Ejecutiva " << endl;
    }

    cout << "Subtotal de alojamiento: S/." << costoBaseHabitacion * numeroNoches << endl;

    if (opcionTipoHabitacion == 1 && numeroHuespedes > 1) {
        cout << "Recargo por huespedes adicionales: S/." << montoRecargoHuespedes * numeroNoches << endl;
    }
    if (opcionTipoHabitacion == 2 && numeroHuespedes > 2) {
        cout << "Recargo por huespedes adicionales: S/." << montoRecargoHuespedes * numeroNoches << endl;
    }
    if (opcionTipoHabitacion == 3 && numeroHuespedes > 3) {
        cout << "Recargo por huespedes adicionales: S/." << montoRecargoHuespedes * numeroNoches << endl;
    }

    cout << "Costo de alimentacion: S/." << costoAlimentacionPorNoche * numeroNoches << endl;

    if (numeroNoches > 5) {
        cout << "descuento por estadia larga: S/." << montoDescuento << endl;
        cout << "Monto total a pagar: S/." << montoTotalFinal << endl;
    }
    else {
        cout << "Monto total a pagar: S/." << subtotalReserva << endl;
    }

    return 0;
}