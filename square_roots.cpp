#include <bits/stdc++.h>
using namespace std;
float square_root(int n, int p)
{
    int s = 0;
    int e = n;
    float ans = 0;

    // Binary Search
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (mid * mid == n) // case of perfect square
        {
            return mid;
        }
        else if (mid * mid < n)
        {
            ans = mid;
            s = mid + 1 ;
        }
        else
        {
            e = mid - 1;
        }
    }

    // Floating part logic
    // Linear search for each place
    float inc = 0.1;
    for (int place = 1; place <= p; place++)
    {
        // Linear search
        while (ans * ans <= n)
        {
            ans += inc;
        }
        // Take one step back
        ans = ans - inc;
        inc = inc / 10.0;
    }
    return ans;
}
int main()
{
    int n, p;
    cout<<"Enter the number whose square root you want "<<endl;
    cin >> n ;
    cout<<"Enter the value for p"<<endl;
    cin>>p;
    cout <<"Square root of "<<n<<" upto "<<p<<" places is "<< square_root(n, p) << endl;
}