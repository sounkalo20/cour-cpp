#include <iostream>
using namespace std;

bool premier(int nbr);
int main()
{
    bool verif=false;
    int max=1000;
    for (int i = 2; i < max; i++)
    {
       verif=premier(i);
        if (verif)
        {
            cout<<i<<" ";
        }
        
    }
    
    return 0;
}

bool premier(int nbr){
    bool premier=true;
    for (int i = 2; i < nbr/2; i++)
    {
        if ((nbr%i)==0)
        {
            premier=false;
            break;
        }
        
    }
    if(premier){
            return true;
        }else{
            return false;
        }
    
    
}