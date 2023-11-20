#include<iostream>
using namespace std;
int main()
{
    int s1,s2;
    int area,param;
    cout<<"Enter side 1: "<<endl;
    cin>>s1;
    cout<<"Enter side 2: "<<endl;
    cin>>s2;
    area = s1*s2;
    param = 2*(s1+s2);
    cout<<"Area: "<<area<<endl;
    cout<<"Parameter: "<<param<<endl;
}
