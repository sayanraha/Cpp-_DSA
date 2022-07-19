//Remove duplicates in a string
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, output;
    cout << "Enter a string" << endl;
    getline(cin,a);
    int len = a.length();
    sort(a.begin(), a.end());
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (a[i] == a[i + 1] && count == 0)
        {
            output += a[i];
            count++;
        }
        if (a[i] != a[i + 1])
        {
            output += a[i + 1];
        }
    }

    cout << "The new String is :- " << output << endl;
    return 0;
}