#ifndef DEF_PERSONNAGE
#define DEF_PERSONNAGE

#include <string>
#include "Arme.hpp"
#include "Mort.hpp"
class Personnage:Mort
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
    void demanderPromo();
    private:

    int m_vie;
    int m_mana;
    Arme m_arme;
};

#endif