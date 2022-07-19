#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector <vector<int>>arr = {
        {10,11,12,13},
        {20,22,24},
        {33,35,37,38},
        {40,41}};
        for(int i=0;i<arr.size();i++)//arr.size here denotes the number of rows
        {
            for(int j : arr[i])//This loop is known as foreach loop
            {
                cout<<j<<" ";
            }
            cout<<endl;
        }
}