#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string> jours;
    jours.push_back("lundi");
    jours.push_back("Mardi");
    jours.push_back("Mercredi");
    jours.push_back("Jeudi");
    jours.push_back("Vendredi");
    jours.push_back("Samedi");
    jours.push_back("Dimanche");

    int choix;
    do
    {
        cout << "entrez un nombre compris  entre 1 et 7 : ";
        cin >> choix;
    } while (choix < 1 || choix > 7);
    cout << "le " << choix << "e jour de la semaine est : " << jours[choix - 1];
    return 0;
}
