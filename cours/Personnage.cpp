#include <iostream>
#include "Personnage.hpp"
using namespace std;

Personnage::Personnage()
{
    m_vie = 100;
    m_mana = 100;
    m_arme=Arme("Eppee Rouiller",10);
}
Personnage::Personnage(string nomArme,int degatsArme){
     m_vie = 100;
     m_mana = 100;
     m_arme=Arme(nomArme,degatsArme);
}


Personnage::~Personnage(){

}

void Personnage::recevoirDegats(int nbDegats){
    m_vie-=nbDegats;
    if (m_vie<0)
    {
        m_vie=0;
    }
    
}

// void Personnage::attaquer(Personnage &cible){
//     cible.recevoirDegats();
// }

void Personnage::boirePotionDeVie(int quantitePotion){
    m_vie+=quantitePotion;
    if(m_vie>100){
        m_vie=10;
    }
}

void Personnage::changerArme(string newArme,int degatNewArme){
   m_arme=Arme(newArme,degatNewArme);
}
bool Personnage::estVivant() const{
    return m_vie>0;
}

void Personnage::afficherEtat()const{
    cout<<"Vie: "<<m_vie<<endl;
    cout<<"Mana: "<<m_mana<<endl;
    m_arme.afficher();
}