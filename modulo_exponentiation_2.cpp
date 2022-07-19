#include <bits/stdc++.h>
using namespace std;
long long int solve(int a, int b, long int mod)
{
    if (a == 0)
        return 0;
    if (b == 0)
        return 1;

    long int y;
    if (b & 1) // If b is odd
    {
        y = a % mod;
        y = (y * solve(a, b - 1, mod) % mod) % mod;
    }
    else// If b is even
    {
        y = solve(a, b / 2, mod);
        y = (y * y) % mod;
    }
    return (long long int)((y + mod) % mod);
}
long long int powerModulo(int a, int b)
{
    long int mod = 1e9 + 7;
    return solve(a, b, mod);
}
int main()
{
    int a, b;
    cin >> a;
    cin >> b;
    cout << powerModulo(a, b);
}