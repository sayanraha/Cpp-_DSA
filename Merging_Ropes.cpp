#include<bits/stdc++.h>
using namespace std;
int Min_Cost(int arr[],int n)
{
    priority_queue<int,vector<int>,greater<int>> pq(arr,arr+n);

    int cost = 0;
    while(pq.size()>1)
    {
        int A = pq.top();
        pq.pop();

        int B = pq.top();
        pq.pop();

        int new_rope = A + B;
        cost += new_rope;
        pq.push(new_rope);
    }
    return cost;
}
int main()
{
    int ropes[]= {4,3,2,6};
    int n = 4;
    cout<<"Minimum cost to join all the ropes together is = "<<Min_Cost(ropes,n);
    return 0;

}