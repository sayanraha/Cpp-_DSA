#include<bits/stdc++.h>
//#define ll long long
using namespace std;
int  dec_bin(int  w)
{
    int  d ,bin = 0;
    while(w>0)
    {
        d = w % 2 ;
        bin = bin * 10 + d;
        w = w / 2;
    }
    return bin;
}
int earth_lv(int k)
{
    int x = dec_bin(k);
    int m,s = 0;
    while(x!=0)
    {
        m = x % 2;
        s += m;
        x  = x / 10;
    }
    return s;
}
int main()
{
    int n;
    cout<<"Enter the steps in which the alien is present"<<endl;
    cin>>n;
    cout<<"Minimum steps required is = "<<earth_lv(n);
}