#include<iostream>
using namespace std;
class shape
{
protected:
    int width,height;
public:
    void setwidth(int w)
    {
        width = w;
    }
    void setheight(int h)
    {
        height = h;
    }
};

class rectangle: public shape
{
    public:
    int getarea()
    {
        return (width*height);
    }
};

int main()
{
    rectangle r;
    r.setwidth(5);
    r.setheight(10);
    cout<<"Area: "<<r.getarea()<<endl;
}
