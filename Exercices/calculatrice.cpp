#include <iostream>

using namespace std;

int main()
{
    float nbr1, nbr2;
    cout << "Bienvenue" << endl;
    cout << "1-addition   2-soustraction  3-multiplication  4-division  5-modulo" << endl;
    int choix;
    do
    {
        cout << "Veuillez choisir un programe : " << endl;
        cin >> choix;
    } while (choix < 1 || choix > 5);
    cout << "Entrer le premier nombre: " << endl;
    cin >> nbr1;
    cout << "Entrer le deuxieme nombre: " << endl;
    cin >> nbr2;

    switch (choix)
    {
    case 1:
        nbr1 += nbr2;

        break;
    case 2:
        nbr1 -= nbr2;

        break;
    case 3:
        nbr1 *= nbr2;

        break;
    case 4:
        if (nbr2 == 0)
        {
            cout << "impossible " << endl;
        }
        else
        {
            nbr1 /= nbr2;
        }
        break;

    case 5:
        nbr1 = (int)nbr1 % (int)nbr2;

        break;
    }

    cout << "le resultat est : " << nbr1 << endl;
    return 0;
}
