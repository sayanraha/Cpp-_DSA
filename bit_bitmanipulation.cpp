#include <bits/stdc++.h>
using namespace std;
int get_bit(int n, int i)
{
    int mask = 1 << i;
    return (n & mask) > 0 ? 1 : 0;
}
void clear_bit(int &n, int i)
{
    int mask = ~(1 << i);
    n = (n & mask);
}
void set_bit(int &n, int i)
{
    int mask = 1 << i;
    n = n | mask;
}
void update_ith_bit(int &n, int i, int value)
{
    clear_bit(n, i);
    int mask = value << i;
    n = n | mask;
}
void clear_last_bit(int &n, int i)
{
    int mask = -1 << i;
    n = n & mask;
}
void clear_range_bits(int &n, int i, int j)//Very Tricky Concept
{
    int a = (-1 << j + 1);
    int b = (1 << i) - 1;
    int mask = (a | b);
    n = n & mask;
}
int main()
{
    int num, x, y, val;
    cout << "Enter a number" << endl;
    cin >> num;
    // cout << "Enter the position whose bit you want" << endl;
    cout << "Enter the first position" << endl;
    cin >> x;
    cout << "Enter the second position" << endl;
    cin >> y;
    //cin >> val; //val can be only 0 or 1

    //cout<<"Bit of the given position is = "<<get_bit(num,i)<<endl;
    //clear_bit(num,x);
    //set_bit(num,x);
    //update_ith_bit(num, x, val);
    //clear_last_bit(num,x);

    clear_range_bits(num, x, y);
    cout << "New number is = " << num;
    return 0;
}