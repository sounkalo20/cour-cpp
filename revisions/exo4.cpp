#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int max = -1;
    int min = 21;
    int note;
    int taille = 0;
    int i = 0, j = 0;
    do
    {
        cout << "entrez une note (-1 pour finir): ";
        cin >> note;
        if (note < 0)
        {
            break;
        }

        if (note > max)
        {
            max = note;
            i++;
        }
        else if (note < min)
        {
            min = note;
            j++;
        }
        taille++;
    } while (taille < 10);

    cout << "le max est " << max << " il a ete attribuer " << i << " fois";
    cout << " le min est " << min << " il a ete attribuer " << j << " fois";
    return 0;
}
