#include <bits/stdc++.h>
using namespace std;
bool isOpening(char a)
{
    return a == '(' || a == '{' || a == '[';
}
bool isMatching(char a, char b)
{
    return a == '(' and b == ')' || a == '{' and b == '}' || a == '[' and b == ']';
}
bool isParenthesis(string str)
{
    stack<char> s;
    for (int i = 0; i < str.length(); i++)
    {
        char curr = str.at(i);
        if (isOpening(curr))
        {
            s.push(curr);
        }
        else
        {
            if (s.empty())
            {
                return false;
            }
            else if (!isMatching(s.top(), curr))
            {
                return false;
            }
            else
            {
                s.pop();
            }
        }
    }
    return s.empty();
}

int main()
{
    string a;
    cout << "Enter a string " << endl;
    getline(cin, a);
    cout << endl;
    if (isParenthesis(a)==true)
    {
        cout << "true" << endl;
    }
    else
    {
        cout << "false" << endl;
    }
}
