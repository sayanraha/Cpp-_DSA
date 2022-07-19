#include <iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the number whoes table you want "<<endl;
    cin>>a;
    cout<<"The multiplication table is :-"<<endl;
    for(int i = 1;i<=10;i++)
    {
        cout<< a <<"x"<< i << " = " << a * i<<endl;
    }
}