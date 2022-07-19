#include <bits/stdc++.h>
using namespace std;
int climb_ladders(int n)//O(3^N)time complexity very bad complexity we can optimize using DP
{
    if (n < 0)
    {
        return 0;
    }
    if (n == 0)
    {
        return 1;
    }
    return climb_ladders(n - 1) + climb_ladders(n - 2) + climb_ladders(n - 3);
}
int main()
{
    int n;
    cout << "Enter the value of N " << endl;
    cin >> n;
    cout << "Number of ways to climb is = " << climb_ladders(n) << endl;
    return 0;
}