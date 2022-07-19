#include <bits/stdc++.h>
using namespace std;
int maxPro(vector<int> &num)
{
    priority_queue<int> q;
    for (int x : num)
    {
        q.push(x-1);
    }
    int p = q.top();
    q.pop();
    return p * q.top();
}
int main()
{
    vector<int> n = {3, 4, 5, 2};
    cout << "Maximum product is = " << maxPro(n) << endl;
    return 0;
}