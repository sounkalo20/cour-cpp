#include <iostream>
#include <math.h>
using namespace std;

class Point
{
private:
    int x,y;
public:
     int getX()
    {
        return this->x;
    }
    void setX(int x)
    {
        this->x = x;
    }
     int getY()
    {
        return this->y;
    }
    void setY(int y)
    {
        this->y = y;
    }
    Point(int _x,int _y){
        x=_x;
        y=_y;
    };

    float distance(Point p){
        float distance=0;
        distance=sqrt(pow(p.x-x,2)+pow(p.y-y,2));
    }
    
};


