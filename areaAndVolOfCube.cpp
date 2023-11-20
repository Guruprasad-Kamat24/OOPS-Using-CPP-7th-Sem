#include<iostream>
using namespace std;
class Cube{
public:
    int side;
public:
    Cube(int s)
    {
        side = s;
    }
    int area()
    {
        return 6*side*side;
    }
    int vol()
    {
        return side*side*side;
    }
};
int main()
{
    cout<<"Enter the side: "<<endl;
    int side;
    cin>>side;
    Cube mycube(side);
    cout<<"Area: "<<mycube.area()<<endl;
    cout<<"Volume: "<<mycube.vol()<<endl;
}

