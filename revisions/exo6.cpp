#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i=0,max,min;
    int tab[10]={15,24,87,34,-18,0,16,4,7,11};
    max=tab[0];
    min=tab[0];


    for ( i = 0; i < 10; i++)
    {
        if (*(tab+i)>max)
        {
           max=*(tab+i);
        }
        if (*(tab+i)<min)
        {
            min=*(tab+i);
        }
        
        
    }
    cout<<"le min est : "<<min<<endl;
    cout<<"le max est : "<<max<<endl;


    return 0;
}
