#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;

    int notas[5] = {2, 14, 15, 18, 20};

    cout << "ARREGLO UNIDIMENSIONAL\n";
    cout << "Primera nota indice 0: " << notas[0] << endl;
    cout << "Ultima nota indice 4: " << notas[4] << endl;

    cout << "LA DE TODAS LAS NOTAS";
    for (int indiceNota = 0; indiceNota < 5; indiceNota++)
        cout << "Nota en indice: [" << indiceNota << "] " << notas[indiceNota] << endl;

    return 0;
}