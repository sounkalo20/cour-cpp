#include <iostream>
#include <string>

using namespace std;

int main()
{
    float note, moy;
    int i = 1;

    while (i <= 3)
    {
        cout << "Entrer la note " << i << ":" << endl;
        cin >> note;
        if (note > 1 && note < 20)
        {
            moy += note;
            i++;
        }
        else
        {
            cout << "la note doit etre comprise entre 1 et 20" << endl;
        }
    }
    cout << "la moyenne des 3 notes est " << moy / 3;

    return 0;
}
