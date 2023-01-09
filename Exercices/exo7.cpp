#include <iostream>
#include <string>

using namespace std;

int main()
{
    int nbr, fact = 1;
    do
    {
        cout << "entrer le nombre dont vous voulez connaitre le factoreillle: ";
        cin >> nbr;
    } while (nbr < 0);
    if (nbr == 0)
    {
        fact = 1;
    }
    else
    {
        for (int i = 1; i <= nbr; i++)
        {
            fact *= i;
        }
    }
    cout << "le factorielle est: " << fact;
    return 0;
}
