#include <iostream>
using namespace std;

int main() {
    double pesoMaximo = 0, pesoMinimo = 999, sumaPesos = 0, promedioPesos = 0, pesoActual = 0;
    int contadorBajoPeso = 0, contadorValidos = 0;

    cout << "CONTROL DE CALIDAD EN PLANTA INDUSTRIAL" << endl;

    for (int indiceBotella = 1; indiceBotella <= 8; indiceBotella++) {
        cout << "Ingrese el peso de la botella " << indiceBotella << ": ";
        cin >> pesoActual;

        if (pesoActual <= 0) {
            cout << "El peso ingresado debe ser mayor a 0" << endl;
            continue;
        }

        sumaPesos = sumaPesos + pesoActual;
        contadorValidos++;

        if (pesoActual > pesoMaximo) pesoMaximo = pesoActual;
        if (pesoActual < pesoMinimo) pesoMinimo = pesoActual;
        if (pesoActual < 490) contadorBajoPeso += 1;
    }

    if (contadorValidos > 0) {
        promedioPesos = sumaPesos / contadorValidos;
    } else {
        promedioPesos = 0;
    }

    cout << "Suma total de pesos: " << sumaPesos << endl;
    cout << "Promedio de pesos: " << promedioPesos << endl;
    cout << "Peso minimo: " << pesoMinimo << endl;
    cout << "Peso maximo: " << pesoMaximo << endl;
    cout << "Total de botellas con bajo peso: " << contadorBajoPeso << endl;

    return 0;
}