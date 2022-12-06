#include <iostream>
#include <math.h>

using namespace std;

void Exo1();
void Exo2();
void Exo3();
void Exo5();
void Exo7();
void Exo8();
void Exo11();

int main()
{
    int continuer;
    do
    {
        int choix;
        do
        {
            cout << "Bienvenue! Faites un choix entre 1 et 7: ";
            cin >> choix;
        } while (choix < 0 || choix > 7);

        switch (choix)
        {
        case 1:
            Exo1();
            break;
        case 2:
            Exo2();
            break;
        case 3:
            Exo3();
            break;
        case 4:
            Exo5();
            break;
        case 5:
            Exo7();
            break;
        case 6:
            Exo8();
            break;
        case 7:
            Exo11();
            break;
        }
        cout << "Voulez Vous continuer a jouer et essayer une autre fonction (Tapez 1 pour oui et 0 pour Non):";
        cin >> continuer;
    } while (continuer != 0);
    cout << "Aurevoir A bientot";
    return 0;
}

void Exo1()
{
    int nombre = 100;
    cout << "les nombres divisible par 5 et 3 sont :" << endl;

    while (nombre <= 500)
    {
        if ((nombre % 3 == 0) || (nombre % 5 == 0))
        {
            cout << nombre << " ";
        }
        nombre++;
    }
}
void Exo2()
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

    cout << "le nombre entrer a " << i << " chiffres" << endl;
}
void Exo3()
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
}
void Exo5()
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
    cout << "le nombre renverser est " << nbrInverse << endl;
}
void Exo7()
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
    cout << "le factorielle est: " << fact << endl;
}
void Exo8()
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
    cout << "la moyenne des 3 notes est " << moy / 3 << endl;
}
void Exo11()
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
}