#include <iostream>
using namespace std;

int main() {
    double pesoPersona, estaturaPersona, indiceMasaCorporal;
    int codigoRangoIMC;

    cout << "=== CALCULADORA DE INDICE DE MASA CORPORAL ===" << endl;
    cout << "Ingrese su peso en kg: ";
    cin >> pesoPersona;
    cout << "Ingrese su estatura en metros: ";
    cin >> estaturaPersona;

    if (pesoPersona <= 0 || estaturaPersona <= 0) {
        cout << "ERROR: El peso y la estatura deben ser mayores a 0." << endl;
    } else {
        indiceMasaCorporal = pesoPersona / (estaturaPersona * estaturaPersona);
        cout << "Su IMC es: " << indiceMasaCorporal << endl;

        if (indiceMasaCorporal < 18.5) {
            codigoRangoIMC = 1;
        }
        else if (indiceMasaCorporal <= 24.9) {
            codigoRangoIMC = 2;
        }
        else if (indiceMasaCorporal <= 29.9) {
            codigoRangoIMC = 3;
        }
        else if (indiceMasaCorporal <= 34.9) {
            codigoRangoIMC = 4;
        }
        else {
            codigoRangoIMC = 5;
        }

        switch (codigoRangoIMC) {
            case 1:
                cout << "Bajo peso" << endl;
                break;
            case 2:
                cout << "Peso Normal" << endl;
                break;
            case 3:
                cout << "Sobrepeso" << endl;
                break;
            case 4:
                cout << "Obesidad grado I" << endl;
                break;
            case 5:
                cout << "Obesidad de grado II" << endl;
                break;
            default:
                cout << "No se pudo clasificar el IMC" << endl;
                break;
        }
    }

    return 0;
}