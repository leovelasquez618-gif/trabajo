#include <iostream>

using namespace std;

int main()
{
    int matriz[2][3] = {{14, 15, 16}, {8, 13, 20}};

    cout << "ARREGLO BIDIMENSIONAL MATRIZ" << endl;
    cout << "Notas del estudiante  " << matriz[0][1] << endl;

    for (int indiceFila = 0; indiceFila < 2; indiceFila++) {
        for (int indiceColumna = 0; indiceColumna < 3; indiceColumna++) {
            cout << matriz[indiceFila][indiceColumna] << "\t";
        }
        cout << endl;
    }

    return 0;
}