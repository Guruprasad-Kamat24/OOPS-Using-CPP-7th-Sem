#include<iostream>
using namespace std;
class A{
public:
    void func();
};
 void A::func()
 {
     cout<<"A function has been called"<<endl;
 }

 int main()
 {
     A a;
     a.func();
 }
