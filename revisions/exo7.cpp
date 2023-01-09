#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int i=0,j=0;
    float t1[10],t2[10]={15,-24,87,-34,-18,0,16,4,7,11};
    
    for (i = 0; i < 10; i++)
    {
      t1[i]=0;  
    }
    for ( i = 0,j=0; j < 10; j++)
    {
        if (t2[j]>0)
        {
           t1[i++]=t2[j];
        }
        
    }
    

    for ( i = 0; i < 10; i++)
    {
        cout<<t1[i]<<endl;
    }
    
    
    return 0;
}
