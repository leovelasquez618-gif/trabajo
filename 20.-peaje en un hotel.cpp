#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int opcionVehiculo, tienePase;
    double pesoVehiculo;
    double tasaDescuento = 0.0;
    double montoMulta = 0.0;
    double montoBase;

    cout << "SISTEMA DE COBRO DE PEAJE" << endl;
    cout << "Ingrese la categoria del vehiculo " << endl;
    cout << "\n 1: Auto/Camioneta($3.00)" << endl;
    cout << "\n 2: Autobus($6.00)" << endl;
    cout << "\n 3: Camion de carga($10.00)" << endl;
    cin >> opcionVehiculo;

    cout << "Ingrese el peso total del vehiculo en toneladas" << endl;
    cin >> pesoVehiculo;

    if (pesoVehiculo <= 0) {
        cout << "ERROR: El peso del vehiculo ingresado debe de ser mayor a cero ";
        return 1;
    }
    else {
        cout << "Cuenta con pase electronico (Telepeaje)? (1,si o 0,no)" << endl;
        cin >> tienePase;

        if (tienePase == 1)
            tasaDescuento = 0.15;

        if (opcionVehiculo == 3 && pesoVehiculo >= 12) {
            montoMulta = (pesoVehiculo - 12) * 2.5;
        }

        switch (opcionVehiculo) {
            case 1:
                montoBase = 3;
                break;
            case 2:
                montoBase = 6;
                break;
            case 3:
                montoBase = 10;
                break;
            default:
                cout << "ERROR: Codigo del servicio no valido" << endl;
                return 1;
        }

        double montoDescuento = montoBase * tasaDescuento;
        double montoFinal = montoBase - montoDescuento + montoMulta;

        cout << fixed << setprecision(2);
        cout << "\n Boleta de Peaje" << endl;
        cout << "Monto Original: " << montoBase << endl;
        cout << "Descuento total: " << montoDescuento << endl;
        cout << "Multas por exceso de peso: " << montoMulta << endl;
        cout << "Monto Final: " << montoFinal << endl;
    }

    return 0;
}