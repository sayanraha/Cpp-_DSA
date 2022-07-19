#include<iostream>
using namespace std;
int main()
{
    char sentence[100];
    int len = 0;
    char temp = cin.get();
    while(temp != '*')
    {
        sentence[len++]=temp;
        temp = cin.get();
    }
    cout<<endl;
    cout<<sentence<<endl;
    cout<<"Length is = "<<len<<endl;
    return 0;
}