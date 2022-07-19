#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {5, 4, 1, 4, 3, 5, 1, 7};
    int a = 0, b = 0,xr = 0,rsbm;
    for (int i = 0; i < v.size(); i++)
    {
        xr = xr ^ v[i];
    }
    rsbm = xr & -xr;
    for(int k = 0;k < v.size();k++)
    {
        if((v[k]&rsbm) == 0)
        {
            a = a ^ v[k];
        }
        else{
            b = b ^ v[k];
        }
    }
    cout << "Two non repeted numbers are = " << a << " and " << b << endl;
}
