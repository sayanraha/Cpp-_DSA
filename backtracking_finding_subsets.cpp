#include<bits/stdc++.h>
using namespace std;
void findingsubsets(char *input,char *output,int i,int j)
{
    //BASE CASE
    if(input[i]=='\0')
    {
        output[j]= '\0';
        if(output[0] == '\0')
        {
            cout<<"NULL";
        }
        cout<<output<<endl;
        return;
    }
    //RECURSIVE CASE
    output[j]= input[i];
    findingsubsets(input,output,i+1, j+1);//INCLUDING THE ith letter
    findingsubsets(input,output,i+1, j);//NOT INCLUDING THE ith letter
    
}
int main()
{
    char input[10],output[10];
    cin>>input;cout<<endl;
    findingsubsets(input,output,0, 0);
   // return 0;
}