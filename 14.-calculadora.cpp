#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double pesoVehiculo;
    int categoriaVehiculo;
    double costoBaseCategoria = 0.0;
    double descuentoTelepeaje = 0.0;
    double penalizacionPeso = 0.0;
    int tienePaseTelepeaje = 0;
    double totalPagar = 0.0;

    cout << "CALCULADORA DE PEAJE Y EXCESO DE CARGA" << endl;
    cout << "Ingrese el peso total del vehiculo en toneladas: ";
    cin >> pesoVehiculo;

    if (pesoVehiculo <= 0) {
        cout << "ERROR, el peso del vehiculo debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Cuenta con pase electronico de telepeaje (1 = Si, 0 = No): " << endl;
    cin >> tienePaseTelepeaje;

    cout << "Seleccione la categoria del vehiculo" << endl;
    cout << "1: Auto / camioneta ($3.00)" << endl;
    cout << "2: Autobus ($6.00)" << endl;
    cout << "3: Camion de carga ($10.00)" << endl;
    cout << "OPCION: ";
    cin >> categoriaVehiculo;

    switch (categoriaVehiculo) {
        case 1:
            costoBaseCategoria = 3.00;
            break;
        case 2:
            costoBaseCategoria = 6.00;
            break;
        case 3:
            costoBaseCategoria = 10.00;
            break;
        default:
            cout << "ERROR: Opcion de categoria no valida" << endl;
            return 1;
    }

    if (categoriaVehiculo == 3 && pesoVehiculo >= 12) {
        penalizacionPeso = (pesoVehiculo - 12) * 2.5;
    }

    if (tienePaseTelepeaje == 1) {
        descuentoTelepeaje = costoBaseCategoria * 0.15;
    }

    totalPagar = (costoBaseCategoria - descuentoTelepeaje) + penalizacionPeso;

    cout << fixed << setprecision(2);
    cout << "--------------- Desglose ---------------" << endl;
    cout << "Costo base de la categoria: $" << costoBaseCategoria << endl;
    cout << "Descuento aplicado por pase de Telepeaje: $" << descuentoTelepeaje << endl;
    cout << "Penalizacion por exceso de peso: $" << penalizacionPeso << endl;
    cout << "Monto final a pagar: $" << totalPagar << endl;

    return 0;
}