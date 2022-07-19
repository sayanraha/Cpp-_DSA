#include<bits/stdc++.h>
using namespace std;
bool compare(string a,string b)
{
    if(a.length()==b.length())
    {
        return a<b;
    }
    return a.length()<b.length();
}
void findingsubsets(char *input,char *output,int i,int j,vector<string> &v)
{
    //BASE CASE
    if(input[i]=='\0')
    {
        output[j]= '\0';
        string temp(output);
        v.push_back(temp);
        
        return;
    }
    //RECURSIVE CASE
    output[j]= input[i];
    findingsubsets(input,output,i+1, j+1,v);//INCLUDING THE ith letter
    findingsubsets(input,output,i+1, j,v);//NOT INCLUDING THE ith letter
    
}
int main()
{
    char input[10],output[10];
    cin>>input;
    cout<<endl;
    vector<string> v;
    findingsubsets(input,output,0, 0,v);
    sort(v.begin(),v.end(),compare);
    for(auto x:v)
    {
        cout<<x<<",";
    }
   // return 0;
}