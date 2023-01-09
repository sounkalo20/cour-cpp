#include <iostream>
using namespace std;

int mul2 (int n)
{ if (n%2==0) return 0 ;
else return 1 ;
}
int mul3 (int n)
{ if (n%3==0) return 0 ;
else return 1 ;
}
int main(int argc, char const *argv[])
{
    int nombre,m2,m3;
    cout<<"entrez un entier: ";
    cin>>nombre;
    m2=mul2(nombre);
    m3=mul3(nombre);
    cout<<m2<<endl;
    cout<<m3;
    if (m2==0)
    {
        cout<<"il est pair"<<endl;
    }
    if (m3==0)
    {
       cout<<"il est multiple de trois"<<endl;
    }
    
    return 0;
}


