//Binary String to Decimal
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a;
    cout << "Enter a binary string" << endl;
    cin >> a;
    int x = stoi(a);//Converts string to integer
    int num = x, rem, dec = 0, i = 0;
    while (num != 0)
    {
        rem = num % 10;
        dec += rem * pow(2, i);
        num /= 10;
        i++;
    }
    cout << "The decimal number is = " << dec << endl;
    return 0;
}