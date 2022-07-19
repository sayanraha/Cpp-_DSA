#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sz, d, p;
    cout << "Enter size of the Vector :-" << endl;
    cin >> sz;
    vector<int> v[sz];
    cout << "Enter a number = ";
    cin >> d;
    cout << "Enter elements into the vector " << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cin >> p;
        v[i].push_back(p);
    }
    sort(v.begin(), v.end());
    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        if (v[i + 1] - v[i] <= d)
        {
            count++;
            i++;
        }
    }
    cout << "Number of pairs are = " << count << endl;
    return 0;
}