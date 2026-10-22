#include <iostream>

using namespace std;

int main()
{
    int numeroTabla;
    char respuestaContinuar;

    cout << "Tablas de multiplicar " << endl;
    cout << "De que numero desea la tabla de multiplicar " << endl;
    cin >> numeroTabla;
    do {
        cout << "Tabla del " << numeroTabla << endl;

        for (int numeroMultiplicador = 1; numeroMultiplicador <= 10; numeroMultiplicador++) {
            cout << numeroTabla << " x " << numeroMultiplicador << " = " << (numeroTabla * numeroMultiplicador) << endl;
        }

        cout << "Desea imprimir el siguiente numero? (s/n): " << endl;
        cin >> respuestaContinuar;

        numeroTabla += 1;

    } while (respuestaContinuar == 'S' || respuestaContinuar == 's');

    return 0;
}