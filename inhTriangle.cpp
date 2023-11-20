#include<iostream>
using namespace std;
class shape
{
protected:
    int base,height;
public:
    void setbase(int b)
    {
        base = b;
    }
    void setheight(int h)
    {
        height = h;
    }
};

class triangle: public shape
{
    public:
    int getarea()
    {
        return (0.5*(base*height));
    }
};

int main()
{
    triangle t;
    t.setbase(5);
    t.setheight(10);
    cout<<"Area: "<<t.getarea()<<endl;
}
