#include<iostream>
using namespace std;
int main()
{
    int i,j;
    
    for(i=1;i<=5;i++)
    {
        int x = 65;
        for(j=1;j<=i;j++)
        {
            cout<<(char)x<<" ";
            x  = x+1;
        }
        cout<<endl;
    }
}