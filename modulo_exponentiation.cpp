#include <bits/stdc++.h>
#define ll long long
using namespace std;
ll mod_expo(ll x,ll y,ll mod)
{
    ll ans = 1;
    while (y > 0)
    {
       ll last_bit = (y & 1);
        if (last_bit)
        {
            ans = (ans * x)%mod;
        }
        x = (x * x) % mod;
        y = y >> 1;
    }
    return ans;
}
int main()
{
    ll x, y, mod;
    cout << "Enter a number" << endl;
    cin >> x;
    cout << "Enter the power of the number" << endl;
    cin >> y;
    cout << "Enter the mod value " << endl;
    cin >> mod;
   cout << "The result is = " <<  mod_expo(x, y, mod)<< endl;
    return 0;
}