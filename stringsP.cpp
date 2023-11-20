#include<iostream>
#include <bits/stdc++.h>
#include <cstring>
using namespace std;

void recursiveReverse(string &str, int i = 0)
{
    int n = str.length();
    if (i == n / 2)
        return;
    swap(str[i], str[n - i - 1]);
    recursiveReverse(str, i + 1);
}

int main()
{
    char name[100];
    char surname[100];
    cout<<"Enter the name: "<<endl;
    cin>>name;
    cout<<"Enter the surname: "<<endl;
    cin>>surname;
    cout<<"StrCMP: "<<strcmp(name,"Guru")<<endl;
    strcat(name,surname);
    cout<<name<<endl;
    cout<<"Length of string: "<<strlen(name)<<endl;
    strrev(name);
    cout<<"Reversed: "<<name<<endl;
    char sample[100];
    strcpy(sample,surname);
    cout<<sample<<endl;

    string str = "kamatguru";
    recursiveReverse(str);
    cout <<"Reverse recur: "<<str<<endl;
}

