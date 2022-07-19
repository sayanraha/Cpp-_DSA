//WAP to find the factorial of a given number using recursive function
#include<iostream>
using namespace std;
int fact(int x)
{
    if(x==0)
    {
        return 1;
    }
    else
    {
        return (x * fact(x-1));
    }
}
int main()
{
    int num;
    cout<<"Enter a number whose factorial you want "<<endl;
    cin>>num;
    cout<<"Factorial of "<< num << " is =  "<<fact(num)<<endl;
    return 0;
}