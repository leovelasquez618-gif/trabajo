#include <iostream>
#include <string>
using namespace std;

int main() {
    double nivelGlucosa;
    int opcionTipoMedicion;
    string descripcionTipoMedicion, clasificacionGlucosa;

    cout << "=== Clasificador de Glucosa en Sangre ===\n\n";
    cout << "Tipo de medicion:\n";
    cout << "1. En ayunas\n";
    cout << "2. Aleatoria\n";
    cout << "3. Postprandial (2h despues de comer)\n";
    cout << "Seleccione una opcion: ";
    cin >> opcionTipoMedicion;

    cout << "Ingrese el valor de glucosa (mg/dL): ";
    cin >> nivelGlucosa;

    switch (opcionTipoMedicion) {
        case 1:
            descripcionTipoMedicion = "Ayunas";

            if (nivelGlucosa < 70)
                clasificacionGlucosa = "Hipoglucemia";
            else if (nivelGlucosa <= 99)
                clasificacionGlucosa = "Normal";
            else if (nivelGlucosa <= 125)
                clasificacionGlucosa = "Prediabetes (glucosa en ayunas alterada)";
            else
                clasificacionGlucosa = "Diabetes";

            break;

        case 2:
            descripcionTipoMedicion = "Aleatoria";

            if (nivelGlucosa < 70)
                clasificacionGlucosa = "Hipoglucemia";
            else if (nivelGlucosa <= 139)
                clasificacionGlucosa = "Normal";
            else if (nivelGlucosa <= 199)
                clasificacionGlucosa = "Riesgo elevado / posible prediabetes";
            else
                clasificacionGlucosa = "Diabetes (requiere confirmacion)";
            break;

        case 3:
            descripcionTipoMedicion = "Postprandial";

            if (nivelGlucosa < 70)
                clasificacionGlucosa = "Hipoglucemia";
            else if (nivelGlucosa <= 139)
                clasificacionGlucosa = "Normal";
            else if (nivelGlucosa <= 199)
                clasificacionGlucosa = "Prediabetes (intolerancia a la glucosa)";
            else
                clasificacionGlucosa = "Diabetes";
            break;

        default:
            cout << "Opcion invalida.\n";
            return 1;
    }

    cout << "\n--- Resultado ---\n";
    cout << "Tipo de medicion: " << descripcionTipoMedicion << "\n";
    cout << "Glucosa: " << nivelGlucosa << " mg/dL\n";
    cout << "Clasificacion: " << clasificacionGlucosa << "\n";

    cout << "\nNota: Rangos de referencia generales, no sustituyen diagnostico medico.\n";

    return 0;
}