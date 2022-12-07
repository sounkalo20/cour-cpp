#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>
 
using namespace std;
void melangerLettres(string *mot)
{
    string melange;
    int position(0);
    std::cout << *mot << endl;
 
   //Tant qu'on n'a pas extrait toutes les lettres du mot
    while (mot->size() != 0)
    {
        //On choisit un numéro de lettre au hasard dans le mot
        position = rand() % mot->size();
        //On ajoute la lettre dans le mot mélangé
        melange += mot->at(position);
        //On retire cette lettre du mot mystère
        //Pour ne pas la prendre une deuxième fois
        mot->erase(position, 1);
    }
    //On assigne le mot mélangé au pointeur
    *mot = melange;
}

int main()
{
    
    string motMystere, motUtilisateur;
    string *motMelange(nullptr);
    cout << "Saisissez un mot à l’abri des regards : ";
    cin >> motMystere;
    motMelange = new string(motMystere);
    melangerLettres(motMelange);
    do
    {
        cout<<"quelle est le mot ?"<<*motMelange<<endl;
        cin>>motUtilisateur;
    } while (motUtilisateur!=motMystere);
    if (motUtilisateur == motMystere)
        {
        cout << "Bravo !" << endl;
        }
    else
        {
        cout << "Ce n'est pas le mot !" << endl;
        }
    delete motMelange;
    return 0;
}
