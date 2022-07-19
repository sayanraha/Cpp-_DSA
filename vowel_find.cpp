#include<bits/stdc++.h>
using namespace std;
int main()
{
    string str,output;
    cout<<"Enter a string"<<endl;
    getline(cin,str);
    int l= str.length();
    for(int i =0;i<l;i++)
    {
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        {
            output+= str[i];
        }
    }
    cout<<"Voweles present in the string are:-"<<output<<endl;
}