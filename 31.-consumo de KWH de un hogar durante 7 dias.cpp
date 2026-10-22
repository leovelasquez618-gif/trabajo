#include <iostream>
using namespace std;

int main() {
    double sumaConsumos = 0, contadorAltoConsumo = 0;
    double consumoActual = 0;
    const int TOTAL_DIAS = 7;

    cout << "CONSUMO DE kWh UN HOGAR DURANTE 7 DIAS" << endl;

    for (int indiceDia = 1; indiceDia <= TOTAL_DIAS; indiceDia++) {
        cout << "Ingrese el consumo en kWh dia " << indiceDia << ": " << endl;
        cin >> consumoActual;
        sumaConsumos = sumaConsumos + consumoActual;

        if (consumoActual > 15) {
            contadorAltoConsumo += 1;
        }
    }

    double promedioDiario = sumaConsumos / TOTAL_DIAS;

    cout << "Consumo acumulado total de la semana: " << sumaConsumos << endl;
    cout << "El promedio diario: " << promedioDiario << endl;
    cout << "Cantidad de dias con exceso de consumo: " << contadorAltoConsumo << endl;

    return 0;
}