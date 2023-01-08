#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    double nombre, racine;
    do
    {
        cout << "entrer une nombre positif";
        cin >> nombre;
        if (nombre < 0)
        {
            cout << "svp un nombre positif";
        }
        else
        {
            racine = sqrt(nombre);
            cout << racine;
        }

    } while (nombre != 0);

    return 0;
}
