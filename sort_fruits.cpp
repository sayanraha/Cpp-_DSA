#include <bits/stdc++.h>
using namespace std;

bool compare(pair<string, int> &x, pair<string, int> &y)
{
    int a = x.second;
    int b = y.second;
    return a < b;
}
int main()
{
    vector<pair<string, int>> fruits =
        {
            {"Mango", {100}},
            {"Guava", {70}},
            {"Grapes", {40}},
            {"Apple", {60}},
            {"Banana", {30}},
        };
    sort(fruits.begin(), fruits.end(), compare);

    cout << "Sorted Fruit List in accordance with the price are as follows :-" << endl;

    for (auto s : fruits)
    {
        cout << s.first << "," << s.second << endl;
    }
}