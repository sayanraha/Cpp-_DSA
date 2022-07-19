//RUN LENGTH ENCODING 
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str="abcd",output;
   // getline(cin,str);
    int len = str.length();
    int count=1;
    for(int i=0;i<len;i++)
    {
        count = 1;
        while(i < len and str[i]==str[i+1])
        {
            count++;
            i++;
        }
        output = output + str[i] + to_string(count);
    }
    int l2 = output.length();
    if(l2>len)
    {
        cout<<str<<endl;
    }
    else
    {
        cout<<output<<endl;
    }
    return 0;
}