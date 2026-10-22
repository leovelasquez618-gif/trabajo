#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int numeroActual = 1, sumaTotal = 0;
    do {
        cout << "Numero :" << numeroActual << endl;
        sumaTotal = sumaTotal + numeroActual;
        numeroActual = numeroActual + 1;
    } while (numeroActual <= 10);

    cout << "La suma total es : " << sumaTotal << endl;

    return 0;
}