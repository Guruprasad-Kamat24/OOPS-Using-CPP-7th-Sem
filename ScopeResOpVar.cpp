#include<iostream>
using namespace std;
int X=1;
int main()
{
    int x=10;
    cout<<"The global var X is: "<<::X<<endl;
    cout<<"The local var x is: "<<x<<endl;

}
