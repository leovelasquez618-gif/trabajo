#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double montoCompra;
    int opcionTipoCliente;
    double tasaDescuentoCliente = 0.0;
    double tasaDescuentoAdicional = 0.0;
    double tasaDescuentoTotal = 0.0;
    double montoDescuento = 0.0;
    double montoFinal = 0.0;

    cout << "Sistema de ventas y descuentos" << endl;
    cout << "Ingrese el monto total de la compra S/. ";
    cin >> montoCompra;

    if (montoCompra <= 0) {
        cout << "ERROR, el monto debe ser un valor positivo" << endl;
        return 1;
    }

    cout << "Seleccione el tipo de cliente" << endl;
    cout << "1: Cliente regular" << endl;
    cout << "2: Cliente miembro" << endl;
    cout << "3: Cliente VIP" << endl;
    cout << "OPCION: ";
    cin >> opcionTipoCliente;

    switch (opcionTipoCliente) {
        case 1:
            tasaDescuentoCliente = 0.05;
            break;
        case 2:
            tasaDescuentoCliente = 0.10;
            break;
        case 3:
            tasaDescuentoCliente = 0.20;
            break;
        default:
            cout << "ERROR: Opcion del cliente no valida" << endl;
            return 1;
    }

    if (montoCompra > 200.00) {
        tasaDescuentoAdicional = 0.05;
    }

    tasaDescuentoTotal = tasaDescuentoCliente + tasaDescuentoAdicional;
    montoDescuento = montoCompra * tasaDescuentoTotal;
    montoFinal = montoCompra - montoDescuento;

    cout << fixed << setprecision(2);
    cout << "Monto original: S/. " << montoCompra << endl;
    cout << "Descuento total aplicado: " << (tasaDescuentoTotal * 100) << "%" << endl;
    cout << "Monto de descuento: S/. " << montoDescuento << endl;
    cout << "Monto final a pagar: S/. " << montoFinal << endl;

    return 0;
}