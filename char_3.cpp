#include<iostream>
using namespace std;
int main()
{
    char paragraph[100];
    cin.getline(paragraph,100,'.');
    cout<<paragraph<<endl;
    return 0;
}