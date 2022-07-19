#include <bits/stdc++.h>
#include "vector.h"//Importing header file created by me
using namespace std;
int main()
{
    Vector <char> vc;
    vc.push_back('s');
    vc.push_back('d');
    for(int i=0 ; i <= vc.size();i++)
    {
        cout<< vc[i]<<",";
    }

    Vector <int> v(5);
    v.push_back(10);
    v.push_back(15);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.pop_back();
    cout<<"size = "<<v.size()<<endl;
    cout<<"capacity = "<<v.capacity()<<endl;
    for(int i=0;i<v.size();i++)
    {
        cout<<v.at(i)<<",";
    }
}