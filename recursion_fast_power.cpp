#include <bits/stdc++.h>
using namespace std;
int fastpow(int a, int n)
{
    if (n == 0)
    {
        return 1;
    }
    int subprob = fastpow(a, n / 2);
    int subprobsq = subprob * subprob;
    if (n & 1)
    {
        return a * subprobsq;
    }
    return subprobsq;
}
int main()
{
    int x, y;
    cout << "Enter a number :" << endl;
    cin >> x;
    cout << "Enter the power of the number :" << endl;
    cin >> y;
    cout << "The result is = " << fastpow(x, y) << endl;
    return 0;
}