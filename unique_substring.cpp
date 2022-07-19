#include<bits/stdc++.h>
using namespace std;
string uniqueSubstring(string str)
{
    unordered_map<char,int> m;
    int i = 0,j = 0,window_len = 0,max_window_len = 0,starting_window = -1;
    while(j < str.length())
    {
        char ch = str[j];
        /* If current character is inside the hashmap and its idx>= 
        start of the the current_window i.e i then do this*/
        if(m.count(ch) and m[ch]>= i)
        {
            i  = m[ch] + 1;
            window_len = j-i;//updated remaining window length excluding current character
        }

        //Update the last occurence
        m[ch] = j;
        window_len++;
        j++;

        //Update max_window_len at every step
        if(window_len>max_window_len)
        {
            max_window_len = window_len;
            starting_window = i;
        }
    }
    return str.substr(starting_window,max_window_len);
}
int main()
{
    string str;
    getline(cin,str);
    cout<<uniqueSubstring(str)<<endl;
}