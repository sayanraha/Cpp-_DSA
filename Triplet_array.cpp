#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> triplets(vector<int> arr,int targetsum)
{
    int n = arr.size();
    vector<vector<int>> result;
    sort(arr.begin(),arr.end());
    //Pick every a[i],pair sum for remaining part
    for(int i=0;i<=n-3;i++)
    {
        int j = i+1;
        int k= n-1;
        //Two pointer approach
        while(j<k)
        {
            int current_sum = arr[i];
            current_sum+= arr[j];
            current_sum+= arr[k];
            if(current_sum==targetsum)
            {
                result.push_back({arr[i],arr[j],arr[k]});
                j++;
                k--;
            }
            else if(current_sum>targetsum)
            {
                k--;
            }
            else{
                j++;
            }
        }
    }
    return result;
}
int main()
{
    vector<int> v = {1,2,3,4,5,6,7,8,9,15};
    int s = 18;
    auto result = triplets(v,s);
    for(auto i : result)
    {
        for(auto no: i)
        {
            cout<<no<<",";
        }
        cout<<endl;
    }
    return 0;
}