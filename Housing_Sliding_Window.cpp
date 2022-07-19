#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int>> housing(vector<int> plots,int k)
{
    int i = 0,j = 0,res = plots[i];
    vector<pair<int,int>> output;
    while(i < plots.size() and j < plots.size())
    {
        if(res <= k)
        {
            j++;
            res += plots[j];
           // output.push_back({i,j});
        }
        if(res > k)
        {
            res -= plots[i];
            i++;
        }
        if(res == k)
        {
            output.push_back({i,j});
        }
    } 
    return output;
}
int main()
{
    vector<int> plots = {1,3,2,1,4,1,3,2,1,1,2};
    //vector<int> plots = {1,3,2,1,4,1};
    int k = 8;
    vector<pair<int,int>> output = housing(plots,k);

    // Smallest window
    int min = INT_MAX;
    pair<int,int> smallest_window;
    for(auto x:output)
    {
        if(abs(x.first - x.second) < min)
        {
            min = abs(x.first - x.second);
            smallest_window = {x.first,x.second};
        }
    }
    cout<<"All windows containing the sum K are :-"<<endl;
    for(auto y:output)
    {
        cout<<y.first<<","<<y.second<<endl;
    }
    cout<<endl;
    cout<<"Smallest window is -> "<<smallest_window.first<<","<<smallest_window.second;
}