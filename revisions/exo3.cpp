#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int taille, i, j;
    cout << "entrez la taille du triangle";
    cin >> taille;
    for (i = 0; i <= taille; i++)
    {
        for (j = 0; j < i; j++)
        {
            cout << "*";
        }
        cout << "" << endl;
    }

    return 0;
}
