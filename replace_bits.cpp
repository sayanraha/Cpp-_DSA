#include <bits/stdc++.h>
using namespace std;
void clear_range_bits(int &n, int i, int j) //Very Tricky Concept
{
    int a = (-1 << j + 1);
    int b = (1 << i) - 1;
    int mask = (a | b);
    n = n & mask;
}
void replace(int &n, int &m, int i, int j)
{
    clear_range_bits(n, i, j);
    int mask = m << i;
    n = (n | mask);
}
int main()
{
    int n, m, x, y;
    cin >> n;
    cin >> m ;
    cin>> x;
    cin>> y;
    replace(n, m, x, y);
    cout << "Number is = "<<n<<endl;
    return 0;
}