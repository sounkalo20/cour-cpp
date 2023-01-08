#include <iostream>
using namespace std;

struct Joueur
{
    int x, y, vitesse;
    void Deplacer(int x1, int y1)
    {
        x += x1 * vitesse;
        y += y1 * vitesse;
    }
};
int main()
{
    int n = 7, *ptr = new int(0);
    return 0;
}
