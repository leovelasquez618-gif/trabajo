#include <iostream>
using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    int numeroActual = 1;
    do {
        cout << "Numero :" << numeroActual << endl;
        numeroActual = numeroActual + 1;
    } while (numeroActual <= 10);

    return 0;
}