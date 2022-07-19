#include<iostream>
#include "stack_using_linkedlist.h"
using namespace std;
int main()
{
    Stack<char> s;
    s.push('H');
    s.push('E');
    s.push('L');
    s.push('L');
    s.push('O');
    while(!s.empty())
    {
        cout<<s.top()<<endl;
        s.pop();
    }
}