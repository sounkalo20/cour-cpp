#include <iostream>
#include <string>
using namespace std;

int main()
{
    int nbr, nbrInverse = 0;
    cout << "Entrer un nombre: ";
    cin >> nbr;
    while (nbr != 0)
    {
        nbrInverse *= 10;
        nbrInverse += nbr % 10;
        nbr /= 10;
    }
    cout << "le nombre renverser est " << nbrInverse;
    return 0;
}
