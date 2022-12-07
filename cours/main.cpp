#include <iostream>
#include "Personnage.hpp" //Ne pas oublier

using namespace std;

int main()
{
    Personnage david;
    Personnage goliath=Personnage("Epee eguiser",30);
    
    david.afficherEtat();
    goliath.afficherEtat();

    return 0;
}