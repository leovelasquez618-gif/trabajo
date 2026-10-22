#include <iostream>
using namespace std;

int main() {
    int segundosTotales, horasConvertidas, minutosConvertidos, segundosRestantes;

    cout << "Ingrese la cantidad de segundos: ";
    cin >> segundosTotales;

    horasConvertidas = segundosTotales / 3600;
    minutosConvertidos = (segundosTotales % 3600) / 60;
    segundosRestantes = segundosTotales % 60;

    cout << "Equivale a: " << horasConvertidas << " horas, "
         << minutosConvertidos << " minutos y "
         << segundosRestantes << " segundos" << endl;

    return 0;
}