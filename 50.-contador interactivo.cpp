#include <iostream>

using namespace std;

int main()
{
    int numeroActual = 1;
    char respuestaContinuar;

    do {
        cout << "Numero: " << numeroActual << endl;
        numeroActual = numeroActual + 1;
        cout << "Desea imprimir el siguiente numero? (s/n): ";
        cin >> respuestaContinuar;
    } while (respuestaContinuar == 'S' || respuestaContinuar == 's');

    return 0;
}