#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int opcionZona, opcionEntrega, opcionCliente;
    double pesoPaquete;
    double tasaDescuento = 0.0, tasaRecargo = 0.0, montoMulta = 0.0, montoBase;

    cout << "SISTEMA DE COBRO DE ENVIO" << endl;
    cout << "Ingrese la zona de destino " << endl;
    cout << "\n 1: Local/Urbana($5.00)" << endl;
    cout << "\n 2: Nacional($10.00)" << endl;
    cout << "\n 3: America del Sur($20.00)" << endl;
    cout << "\n 4: Internacional/Resto del mundo($35.00)" << endl;
    cin >> opcionZona;

    cout << "Ingrese el peso total del paquete en kilogramos" << endl;
    cin >> pesoPaquete;

    if (pesoPaquete <= 0 || pesoPaquete > 50) {
        cout << "ERROR: El peso del paquete no debe de ser menor a cero (kg) o mayor a 50 (kg) ";
        return 1;
    }
    else {
        cout << "Tipo de entrega Express/Prioritaria (1,si o 0,no)" << endl;
        cin >> opcionEntrega;
        cout << "Tipo de cliente: (1,Corporativo/frecuente o 0,Particular) " << endl;
        cin >> opcionCliente;

        if (opcionEntrega == 1)
            tasaRecargo = 0.25;

        if (pesoPaquete > 15)
            montoMulta = 12;

        if (opcionCliente == 1)
            tasaDescuento = 0.10;

        switch (opcionZona) {
            case 1:
                montoBase = 5;
                break;
            case 2:
                montoBase = 10;
                break;
            case 3:
                montoBase = 20;
                break;
            case 4:
                montoBase = 35;
                break;
            default:
                cout << "ERROR: Zona del destino no valido" << endl;
                return 1;
        }

        double montoRecargo = montoBase * tasaRecargo;
        double montoConRecargo = montoBase + montoRecargo;
        double montoDescuento = montoConRecargo * tasaDescuento;
        double montoFinal = montoConRecargo - montoDescuento;

        cout << fixed << setprecision(2);
        cout << "\n#######################################\n" << endl;
        cout << "\n Boleta de Tarifa de envio" << endl;
        cout << "Codigo de zona elegida: " << opcionZona << endl;
        cout << "Costo base por peso: " << montoBase << endl;
        cout << "Multas por exceso de peso: " << montoMulta << endl;
        cout << "Recargo express: " << montoRecargo << endl;
        cout << "Descuento corporativo: " << montoDescuento << endl;
        cout << "Monto Final: " << montoFinal << endl;
    }

    return 0;
}