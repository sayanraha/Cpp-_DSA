#include <bits/stdc++.h>
using namespace std;
void generate_brackets(string output, int n, int open, int close, int i)
{
    if (i == 2 * n)
    {
        cout << output << endl;
        return;
    }

    // Opening Brackets
    if (open < n)
    {
        generate_brackets(output + '(', n, open + 1, close, i + 1);
    }
    // Closing Brackets
    if (close < open)
    {
        generate_brackets(output + ')', n, open, close + 1, i + 1);
    }
}
int main()
{
    string output;
    int n;
    cin >> n;
    generate_brackets(output, n, 0, 0, 0);
}