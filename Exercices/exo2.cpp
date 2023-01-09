#include <iostream>
#include <math.h>

using namespace std;
int main()
{
    int nbr;
    do
    {
        cout << "entrez votre nombre :";
        cin >> nbr;
    } while (nbr < 0);

    int i;
    while (nbr - pow(10, i) >= 0)
    {
        i++;
    }

    cout << "le nombre entrer a " << i << " chiffres";
    return 0;
}
