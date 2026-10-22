#include <iostream>
using namespace std;

int main() {
    double sumaPagos = 0, pagoPasajero;
    int contadorTarifaCompleta = 0;
    const int TOTAL_PASAJEROS = 10;

    cout << "EMPRESA DE BUSES RAPIDO DEL SUR" << endl;
    cout << "CONTROL DE PASAJES" << endl;

    for (int indicePasajero = 1; indicePasajero <= TOTAL_PASAJEROS; indicePasajero++) {
        cout << "Ingrese el monto pagado por el pasajero " << indicePasajero << ": ";
        cin >> pagoPasajero;

        sumaPagos = sumaPagos + pagoPasajero;

        if (pagoPasajero == 15) {
            contadorTarifaCompleta += 1;
        }
    }

    double promedioPago = sumaPagos / TOTAL_PASAJEROS;

    cout << "\n--- Resumen del viaje ---" << endl;
    cout << "Dinero total acumulado en caja: S/." << sumaPagos << endl;
    cout << "Costo promedio pagado por pasajero: S/." << promedioPago << endl;
    cout << "Cantidad total de pasajeros con tarifa completa: " << contadorTarifaCompleta << endl;

    return 0;
}