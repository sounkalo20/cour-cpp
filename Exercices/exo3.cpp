#include <iostream>

using namespace std;

int main()
{
    int nombre;
    int somme;

    for (int i = 0; i < 10; i++)
    {
        cout << "entrez un nombre :" << endl;
        cin >> nombre;
        somme += nombre;
    }
    cout << "la somme est :" << somme << endl;
    return 0;
}
