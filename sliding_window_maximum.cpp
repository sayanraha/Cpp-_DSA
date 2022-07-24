#include <bits/stdc++.h>
using namespace std;
void maxSubArray(vector<int> a, int k)
{
    // Algorithm
    
    deque<int> q(k);
    int i;
    // 1. Process only the first k elements
    for (i = 0; i < k; i++)
    {
        while(!q.empty() and a[i] >= a[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }

    // 2. Remaining the  elements of the array
    for (; i <= a.size(); i++)
    {
        cout<<a[q.front()]<<",";
        // Remove elements from the left(contraction when an index lies)
        while (!q.empty() and q.front()<=i-k)
        {
            q.pop_front();
        }
        while(!q.empty() and a[i] >= a[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i);
    }
}
int main()
{
    vector<int> v = {1,2,3,1,4,5,2,3,6};
    int k = 3;
    maxSubArray(v,k);
    return 0;
}