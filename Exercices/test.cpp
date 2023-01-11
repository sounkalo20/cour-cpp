#include <iostream>
using namespace std;

int main()
{
    /* code */
    int nbr=6414541;
    while(nbr>=0){
        if((nbr/10)>0){
            cout<<nbr%10;
            nbr/=10;
        }
        else if((nbr/10)==0){
            cout<<"01";
            break;
        }
        else{
            cout<<nbr;
            break;
        }
    }
    return 0;
}
