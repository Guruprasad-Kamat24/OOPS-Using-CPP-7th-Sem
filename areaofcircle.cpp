#include<iostream>
using namespace std;
class Cube{
public:
    int radius;
public:
    Cube(int s)
    {
        radius = s;
    }
    int area()
    {
        return 3.14*radius*radius;
    }
};
int main()
{
    cout<<"Enter the radius: "<<endl;
    int radius;
    cin>>radius;
    Cube mycube(radius);
    cout<<"Area: "<<mycube.area()<<endl;
}


