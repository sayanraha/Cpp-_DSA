#include <bits/stdc++.h>
using namespace std;
string stringWindow(string s, string p)
{
    // We are using array as a freq MAP
    int FP[256] = {0};
    int FS[256] = {0};
    int cnt = 0;
    int start = 0; // left contraction
    int start_idx = -1;
    int min_so_far = INT_MAX;
    int window_size;
    for (int i = 0; i < p.length(); i++)
    {
        FP[p[i]]++;
    }

    // Sliding window algorithm
    for (int i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        // expand the window towards right by including current character
        FS[ch]++;

        // Count how many characters have been matched till now between(string & pattern).
        if (FS[ch] != 0 and FS[ch] <= FP[ch])
        {
            cnt++;
        }
        // Check all characters are found in current window then start contracting
        if (cnt == p.length())
        {
            /* start contracting from the left to remove unwanted characters
            (characters either not present in the pattern or its frequency is higher than the required)*/
            while (FP[s[start]] == 0 or FS[s[start]] > FP[s[start]])
            {
                FS[s[start]]--;
                start++;
            }
            // Note the window size
            int window_size = i - start + 1;
            if (window_size < min_so_far)
            {
                min_so_far = window_size;
                start_idx = start;
            }
        }
    }
    if (start_idx == -1)
    {
        return "NO WINDOW FOUND!";
    }
    return s.substr(start_idx, min_so_far);
}
int main()
{
    string s, p;
    cin >> s >> p;
    cout << stringWindow(s, p) << endl;
}