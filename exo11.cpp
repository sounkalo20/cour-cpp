#include <iostream>
using namespace std;
int main()
{
    int i, j, longueur;
    do
    {
        cout << "Entrer la longueur du triangle que vous voulez dessiner: ";
        cin >> longueur;
    } while (longueur < 0);

    for (i = 1; i <= longueur; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "" << endl;
    }

    return 0;
}
