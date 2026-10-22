#include <iostream>
using namespace std;

int main() {
    double nivelGlucosa;
    int codigoCategoriaGlucosa;

    cout << "Ingrese el nivel de glucosa en sangre (mg/dL): ";
    cin >> nivelGlucosa;

    if (nivelGlucosa < 70) {
        codigoCategoriaGlucosa = 1;
    }
    else if (nivelGlucosa < 100) {
        codigoCategoriaGlucosa = 2;
    }
    else if (nivelGlucosa < 126) {
        codigoCategoriaGlucosa = 3;
    }
    else {
        codigoCategoriaGlucosa = 4;
    }

    switch (codigoCategoriaGlucosa) {
        case 1:
            cout << "\nResultado: HIPOGLUCEMIA" << endl;
            break;

        case 2:
            cout << "\nResultado: GLUCOSA NORMAL" << endl;
            break;

        case 3:
            cout << "\nResultado: GLUCOSA ELEVADA / PREDIABETES" << endl;
            break;

        case 4:
            cout << "\nResultado: POSIBLE DIABETES" << endl;
            break;

        default:
            cout << "Categoria no valida." << endl;
    }

    return 0;
}