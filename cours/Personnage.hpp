#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include "Arme.hpp"

class Personnage
{
    public:

    Personnage();
    Personnage(string nomArme,int degatsArme);
    Personnage(Personnage const& autre);
    //Destructeur
    ~Personnage();
    void recevoirDegats(int nbDegats);
    void attaquer(Personnage &cible);
    void boirePotionDeVie(int quantitePotion);
    void changerArme(std::string nomNouvelleArme, int degatsNouvelleArme);
    //Methode constante(qui ne modifie aucun attribut)
    bool estVivant() const;
    void afficherEtat()const;

    private:

    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif