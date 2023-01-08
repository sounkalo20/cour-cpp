#include <iostream>
#include <string>
using namespace std;

class Employe
{
public:
    string nom, compagnie;
    int age;
    void Affichage()
    {
        cout << "Nom: " << nom << " age: " << age << " compagnie: " << compagnie;
    }
    Employe(string nom, string compagnie, int age)
    {
        this->nom = nom;
        this->compagnie = compagnie;
        this->age = age;
    }
    string getNom()
    {
        return this->nom;
    }
    void setNom(string nom)
    {
        this->nom = nom;
    }
    string getCompagnie()
    {
        return this->compagnie;
    }
    void setCompagnie(string compagnie)
    {
        this->compagnie = compagnie;
    }
    int getAge()
    {
        return this->age;
    }
    void setAge(int age)
    {
        this->age = age;
    }
};
int main(int argc, char const *argv[])
{
    Employe E1 = Employe("marc", "Malitel", 19);
    E1.setAge(15);
    E1.Affichage();
    return 0;
}
