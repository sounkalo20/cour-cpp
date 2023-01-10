#include <iostream>
using namespace std;
#include <string>

class Student
{

public:
    string m_nom;
    int m_note1,m_note2;
    Student(string nom,int note1,int note2){
        m_nom=nom;
        m_note1=note1;
        m_note2=note2;
    }
    float moyenne(){
        float moy=0;
        moy=(m_note1+m_note2)/2;
        return moy;
    }
    void show(){
        cout<<"l'eleve "<<this->m_nom<<" a la moyenne suivante "<< moyenne();
    }
};

int main(int argc, char const *argv[])
{
    string nom;
    int note1,note2;
    cout<<"Nom: ";
    cin>>nom;
    cout<<"Note1: ";
    cin>>note1;
    cout<<"Note2: ";
    cin>>note2;
    Student s(nom, note1, note2);
    s.show(); 
    return 0;
}


