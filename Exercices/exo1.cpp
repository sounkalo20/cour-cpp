#include <iostream>

using namespace std;

int main()
{
    int nombre = 100;
    cout << "les nombres divisible par 5 et 3 sont :" << endl;

    while (nombre <= 500)
    {
        if ((nombre % 3 == 0) && (nombre % 5 == 0))
        {
            cout << nombre << endl;
        }
        nombre++;
    }
    return 0;
}
