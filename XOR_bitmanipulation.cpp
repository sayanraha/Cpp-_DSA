#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 3, 1, 4, 2, 3};
    int a = 0;
    for (int i = 0; i < v.size(); i++)
    {
        a = a ^ v[i];
    }
    cout << "Non repeted element is = "<<a<<endl;
}