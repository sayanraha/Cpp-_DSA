#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter a number to check :-" << endl;
    cin >> num;
    if ((num & num - 1) == 0)
    {
        cout << "Power of 2" << endl;
    }
    else
    {
        cout << "Not a Power of 2" << endl;
    }
    return 0;
}