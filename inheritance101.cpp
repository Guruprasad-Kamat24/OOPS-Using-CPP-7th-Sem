#include<iostream>
using namespace std;

class parent{
protected:
    int id_p;
};
class child:public parent{
public:
    void setidp(int p)
    {
        id_p = p;
    }
    int id_c;
    int getidp()
    {
        return id_p;
    }
};

int main()
{
    child c;
    cout<<"Enter value of child id: "<<endl;
    cin>>c.id_c;
    cout<<"Enter value of parent id: "<<endl;
    int p;
    cin>>p;
    c.setidp(p);
    cout<<"Child id: "<<c.id_c<<endl;
    cout<<"Parent id: "<<c.getidp()<<endl;

}
