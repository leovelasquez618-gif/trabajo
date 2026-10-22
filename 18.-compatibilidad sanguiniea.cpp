#include <iostream>
#include <string>
using namespace std;

int main() {
    int opcionDonante, opcionReceptor;
    string nombreDonante, nombreReceptor;
    bool esCompatible = false;

    cout << "=== Consulta de Compatibilidad Sanguinea ===\n\n";
    cout << "Tipos de sangre disponibles:\n";
    cout << "1. O-\n";
    cout << "2. O+\n";
    cout << "3. A-\n";
    cout << "4. A+\n";
    cout << "5. B-\n";
    cout << "6. B+\n";
    cout << "7. AB-\n";
    cout << "8. AB+\n\n";

    cout << "Seleccione el tipo de sangre del DONANTE: ";
    cin >> opcionDonante;
    cout << "Seleccione el tipo de sangre del RECEPTOR: ";
    cin >> opcionReceptor;

    switch (opcionDonante) {
        case 1:
            nombreDonante = "O-";
            esCompatible = true;
            break;

        case 2:
            nombreDonante = "O+";
            switch (opcionReceptor) {
                case 2: case 4: case 6: case 8:
                    esCompatible = true;
                    break;
                default:
                    esCompatible = false;
            }
            break;

        case 3:
            nombreDonante = "A-";
            switch (opcionReceptor) {
                case 3: case 4: case 7: case 8:
                    esCompatible = true;
                    break;
                default:
                    esCompatible = false;
            }
            break;

        case 4:
            nombreDonante = "A+";
            switch (opcionReceptor) {
                case 4: case 8:
                    esCompatible = true;
                    break;
                default:
                    esCompatible = false;
            }
            break;

        case 5:
            nombreDonante = "B-";
            switch (opcionReceptor) {
                case 5: case 6: case 7: case 8:
                    esCompatible = true;
                    break;
                default:
                    esCompatible = false;
            }
            break;

        case 6:
            nombreDonante = "B+";
            switch (opcionReceptor) {
                case 6: case 8:
                    esCompatible = true;
                    break;
                default:
                    esCompatible = false;
            }
            break;

        case 7:
            nombreDonante = "AB-";
            switch (opcionReceptor) {
                case 7: case 8:
                    esCompatible = true;
                    break;
                default:
                    esCompatible = false;
            }
            break;

        case 8:
            nombreDonante = "AB+";
            switch (opcionReceptor) {
                case 8:
                    esCompatible = true;
                    break;
                default:
                    esCompatible = false;
            }
            break;

        default:
            cout << "\nOpcion de donante invalida.\n";
            return 1;
    }

    switch (opcionReceptor) {
        case 1: nombreReceptor = "O-"; break;
        case 2: nombreReceptor = "O+"; break;
        case 3: nombreReceptor = "A-"; break;
        case 4: nombreReceptor = "A+"; break;
        case 5: nombreReceptor = "B-"; break;
        case 6: nombreReceptor = "B+"; break;
        case 7: nombreReceptor = "AB-"; break;
        case 8: nombreReceptor = "AB+"; break;
        default:
            cout << "\nOpcion de receptor invalida.\n";
            return 1;
    }

    cout << "\n--- Resultado ---\n";
    cout << "Donante: " << nombreDonante << "\n";
    cout << "Receptor: " << nombreReceptor << "\n";

    if (esCompatible)
        cout << "Compatibilidad: SI, la donacion es compatible.\n";
    else
        cout << "Compatibilidad: NO, la donacion NO es compatible.\n";

    return 0;
}