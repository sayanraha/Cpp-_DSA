#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    string output = " ";
    getline(cin,s);
    int len = s.length();
    for(int i = 0 ;i< len;i++)
    {
        int c = 1;
        while(i<len and s[i]== s[i+1])
        {
            c++;
            i++;
        }
        output+= s[i]+ to_string(c);
    }
    if(output.length()>=s.length())
    {
        cout<<"Encoded string is = "<<s;
    }
    else{
        cout<<"Encoded string is = "<<output;
    }
    return 0;
}