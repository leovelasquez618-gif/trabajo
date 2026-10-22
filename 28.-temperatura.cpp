#include <iostream>
using namespace std;

int main() {
    double sumaTemperaturas = 0, temperaturaActual;
    int alertasAltaTemperatura = 0;
    const int TOTAL_LECTURAS = 5;

    cout << "TEMPERATURA DE UN INVERNADERO" << endl;
    cout << "Lecturas cada 3 horas (5 registros en total)" << endl;

    for (int indiceLectura = 1; indiceLectura <= TOTAL_LECTURAS; indiceLectura++) {
        cout << "Ingrese la temperatura registrada " << indiceLectura << ": " << endl;
        cin >> temperaturaActual;

        sumaTemperaturas = sumaTemperaturas + temperaturaActual;

        if (temperaturaActual > 28) {
            alertasAltaTemperatura += 1;
        }
    }

    double promedioTemperatura = sumaTemperaturas / TOTAL_LECTURAS;

    cout << "El promedio de temperatura es: " << promedioTemperatura << "C" << endl;
    cout << "Cantidad total de alertas por calor extremo: " << alertasAltaTemperatura << endl;

    return 0;
}