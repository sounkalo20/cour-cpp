#include <iostream>
#include <stdio.h>
using namespace std;

class Rectangle
{
    public:
    int m_a,m_b;
    int surface(){
        return m_a*m_b;
    }
};

int main(int argc, char const *argv[])
{
    Rectangle rectangle;
    cin>>rectangle.m_a;
    cin>>rectangle.m_b;
    cout<<"surface= "<<rectangle.surface();
    return 0;
}


