#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a, b;
    bool flag = true;
    cout << "Input the first string" << endl;
    getline(cin, a);
    cout << "Input the second string" << endl;
    getline(cin, b);
    int l1 = a.length(), l2 = b.length();
    if (l1 != l2)
    {
        cout << "Permuation do not form " << endl;
        goto x;
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    for (int i = 0; i < l1; i++)
    {
        if (a[i] != b[i])
        {
            flag = false;
            break;
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
x:
    return 0;
}