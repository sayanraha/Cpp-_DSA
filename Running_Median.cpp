#include <bits/stdc++.h>
using namespace std;
// Test I/P = 10 5 2 3 0 12 18 20 22 -1
int main()
{
    priority_queue<int> left;                             // Max heap
    priority_queue<int, vector<int>, greater<int>> right; // Min heap

    int d;
    cin >> d;
    left.push(d);
    float med = d;
    cout << med << " ";
    cin >> d;
    while (d != -1)
    {
        if (left.size() > right.size())
        {
            if (d < med)
            {
                right.push(left.top());
                left.pop();
                left.push(d);
            }
            else
            {
                right.push(d);
            }
            med = (left.top() + right.top()) / 2.0;
        }
        else if (left.size() < right.size())
        {
            if (d < med)
            {
                left.push(d);
            }
            else
            {
                left.push(right.top());
                right.pop();
                right.push(d);
            }
            med = (left.top() + right.top()) / 2.0;
        }
        else
        {
            if (d < med)
            {
                left.push(d);
                med = left.top();
            }
            else
            {
                right.push(d);
                med = right.top();
            }
        }
        cout << med << " ";
        cin >> d;
    }
    return 0;
}