#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double pesoPersona, estaturaPersona, indiceMasaCorporal;
    int codigoRangoIMC;

    cout << "Calculo del Indice de masa corporal" << endl;
    cout << "Ingrese su peso (kg): ";
    cin >> pesoPersona;
    cout << "Ingrese su talla (m): ";
    cin >> estaturaPersona;

    if (pesoPersona <= 0 || estaturaPersona <= 0) {
        cout << "\nError: el peso y estatura deben ser mayores a cero\n" << endl;
    }
    else {
        indiceMasaCorporal = pesoPersona / pow(estaturaPersona, 2);

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

        cout << "Su Indice de masa corporal calculado es: " << indiceMasaCorporal << " kg/m2" << endl;
        cout << "\nDiagnostico: ";

        switch (codigoRangoIMC) {
            case 1:
                cout << "Bajo peso" << endl;
                break;
            case 2:
                cout << "Peso normal" << endl;
                break;
            case 3:
                cout << "Sobrepeso" << endl;
                break;
            case 4:
                cout << "Obesidad grado 1" << endl;
                break;
            case 5:
                cout << "Obesidad grado 2" << endl;
                break;
            default:
                cout << "No se pudo clasificar el IMC" << endl;
                break;
        }
    }

    return 0;
}