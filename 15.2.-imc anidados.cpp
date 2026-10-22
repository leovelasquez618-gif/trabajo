#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double pesoPersona, estaturaPersona, indiceMasaCorporal;

    cout << "Ingrese su peso (kg): ";
    cin >> pesoPersona;
    cout << "Ingrese su estatura (m): ";
    cin >> estaturaPersona;

    if (pesoPersona <= 0 || estaturaPersona <= 0) {
        cout << "\nLos datos no pueden tomar valores negativos o cero\n";
    }
    else {
        indiceMasaCorporal = pesoPersona / pow(estaturaPersona, 2);

        if (indiceMasaCorporal < 18.5) {
            cout << "\nEl sujeto pertenece a la categoria de bajo peso\n";
        }
        else {
            if (indiceMasaCorporal <= 24.9) {
                cout << "\nEl sujeto pertenece a la categoria de peso normal\n";
            }
            else {
                if (indiceMasaCorporal <= 29.9) {
                    cout << "\nEl sujeto pertenece a la categoria de sobrepeso\n";
                }
                else {
                    if (indiceMasaCorporal <= 34.9) {
                        cout << "\nEl sujeto pertenece a la categoria de Obesidad grado I\n";
                    }
                    else {
                        if (indiceMasaCorporal <= 39.9) {
                            cout << "\nEl sujeto pertenece a la categoria de Obesidad grado II\n";
                        }
                        else {
                            cout << "\nEl sujeto pertenece a la categoria de Obesidad grado III\n";
                        }
                    }
                }
            }
        }
    }

    return 0;
}