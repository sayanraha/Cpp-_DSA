// Leetcode medium level problem
#include <bits/stdc++.h>
using namespace std;
string SimplifyPath(string path)
{
    istringstream iss(path);
    string token;
    vector<string> tokens;
    while (getline(iss, token, '/'))
    {
        if (token != "." and token != "")
        {
            tokens.push_back(token);
        }
    }
    vector<string> stack;
    if (path[0] == '/')
    {
        stack.push_back("");
    }
    for (auto token : tokens)
    {
        if (token == "..")
        {
            if (stack[stack.size() - 1] == ".." or stack.size() == 0)
            {
                stack.push_back(token);
            }
            else if (stack[stack.size() - 1] != "")
            {
                stack.pop_back();
            }
        }
        else
        {
            stack.push_back(token);
        }
    }
    if (stack[0] == "" and stack.size() == 1)
    {
        return "/";
    }
    ostringstream oss;
    int i = 0;
    for (auto token : stack)
    {
        if (i != 0)
        {
            oss << '/';
        }
        i++;
        oss << token;
    }
    return oss.str();
}
int main()
{
    string path = "/a/./b/../../c/";
    cout << SimplifyPath(path);
    return 0;
}