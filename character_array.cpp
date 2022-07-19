#include<iostream>
using namespace std;
int main()
{
    char temp = cin.get();
    int len = 0;
    while(temp !='\n')
    {
        len++;
        cout<<temp;
        temp = cin.get();
    }
    cout<<endl;
    cout<<"Length is ="<<len<<endl;
    return 0;
}