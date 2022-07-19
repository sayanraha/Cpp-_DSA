#include <bits/stdc++.h>
using namespace std;
int tobinary(int n)
{
    int ans = 0, p = 1;
    while (n > 0)
    {
        int lastbit = n & 1;
        ans = ans + (p * lastbit);
        p = p * 10 ;
        n = n >> 1;
    }
    return ans;
}
int main()
{
    int num;
    cout << "Enter a number = ";
    cin >> num;
    cout << endl
         << "Binary number is = " << tobinary(num);
    return 0;
}