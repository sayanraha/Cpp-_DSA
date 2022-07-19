#include <bits/stdc++.h>
using namespace std;
vector<int> vs;
void all_occ(vector<int> v, int key, int i)
{
    if (v.size() == i)
    {
        return;
    }
    if (v[i] == key)
    {
        vs.push_back(i);
    }
    all_occ(v, key, i + 1);
}
int main()
{
    vector<int> x = {10,15,11,20,24,11,10,12,14,11};
    int key = 11;
    all_occ(x,key,0);
    cout<<"The key element is present at the indices :-"<<endl;
    for(int i = 0;i<vs.size();i++)
    {
        cout<<vs[i]<<" , ";
    }
    cout<<endl;
    return 0;
}