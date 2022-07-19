#include<iostream>
#include<stack>
using namespace std;
int rev(int n)
{
    int num  = n;
    stack<int> s;
    while(num!=0)
    {
        s.push(num%10);
        num /= 10;
    }
    int r = 0,i=1;
    while(!s.empty())
    {
        r = r + (s.top()*i);
        s.pop();
        i = i*10;
    }
    return r;
}
int main()
{
    int n ;
     cout<<"enter a number "<<endl;
     cin>>n;
     cout<<"The reverse number is = "<<rev(n);
}