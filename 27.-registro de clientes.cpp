#include <iostream>
using namespace std;

int main() {
    double sumaPagos = 0, pagoCliente;
    int clientesPreferenciales = 0;
    const int TOTAL_CLIENTES = 8;

    cout << "REGISTRO DE CLIENTES" << endl;

    for (int indiceCliente = 1; indiceCliente <= TOTAL_CLIENTES; indiceCliente++) {
        cout << "Ingrese el monto de pago " << indiceCliente << ": " << endl;
        cin >> pagoCliente;

        if (pagoCliente <= 0) {
            cout << "ERROR: el monto debe ser positivo. Intente nuevamente." << endl;
            indiceCliente--;
            continue;
        }

        sumaPagos = sumaPagos + pagoCliente;

        if (pagoCliente > 100) {
            clientesPreferenciales += 1;
        }
    }

    double promedioConsumo = sumaPagos / TOTAL_CLIENTES;

    cout << "Total acumulado en caja: S/." << sumaPagos << endl;
    cout << "El promedio de consumo es: S/." << promedioConsumo << endl;
    cout << "Cantidad total de clientes preferenciales: " << clientesPreferenciales << endl;

    return 0;
}