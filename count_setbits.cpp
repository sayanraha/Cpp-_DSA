#include <bits/stdc++.h>
using namespace std;
int count_bit(int n)
{
    int count = 0;
    while (n > 0)
    {
        int last_bit = n & 1;
        count += last_bit;
        n = n >> 1;
    }
    return count;
}
int count_set_bit_hack(int n)
{
    int a = 0;
    while(n>0)
    {
        //This is used to remove the last set_bit from the current number
        n = n & (n-1);
        a++;
    }
    return a;
}
int main()
{
    int num;
    cout << "Enter a number :" << endl;
    cin >> num;
    cout <<"Number of set_bits are = "<< count_bit(num) << endl;
    cout <<"Number of set_bits are = "<< count_set_bit_hack(num) << endl;
    return 0;
}