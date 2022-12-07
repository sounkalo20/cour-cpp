#include <iostream>
#include "Arme.hpp"

using namespace std;

Arme::Arme(){
    this->m_nom="Epee rouillee";
    this->m_degats=10;
}

Arme::Arme(string nom,int degats){
    this->m_nom=nom;
    this->m_degats=degats;
}

void Arme::changer(string nom,int degats){
    this->m_nom=nom;
    this->m_degats=degats;
}
void Arme::afficher() const{
    cout<<"Arme: "<<m_nom<<"(Degats: "<<m_degats<<")"<<endl;
}