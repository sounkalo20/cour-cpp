#include <iostream>
#include <stdint.h>
using namespace std;

float somme(float tab[],int taille){
    int i;
    float som;
    for ( i = 0; i < taille; i++)
    {
       som+=tab[i];
    }
    return som;
}

int main(int argc, char const *argv[])
{
    float tab[5]={10,17,23,35,4};
    float som;
    som=somme(tab,5);
    cout<<som;
    return 0;
}
