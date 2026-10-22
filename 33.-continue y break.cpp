#include <iostream>

using namespace std;

int main()
{
    cout << "Hello world!" << endl;
    for (int numeroActual = 1; numeroActual <= 10; numeroActual++) {
        if (numeroActual == 3) {
            continue;
        }
        if (numeroActual == 8) {
            break;
        }

        cout << "Numero " << numeroActual << endl;
    }
    return 0;
}