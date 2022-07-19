#include <bits/stdc++.h>
using namespace std;
queue<int> interleave(queue<int> q)
{
    queue<int> q1, q2;
    int n = q.size();
    for (int i = 0; i < (n / 2); i++)
    {
        q1.push(q.front());
            q.pop();
    }
    for (int i = 0; i < (n / 2); i++)
    {
        q2.push(q.front());
            q.pop();
    }
    for (int i = 0; i < (n/2); i++)
    {
        q.push(q1.front());
        q1.pop();
        q.push(q2.front());
        q2.pop();
    }
    return q;
}
int main()
{
    queue<int> s,c;
    int n,x;
    cout << "Enter the number of elements to be pushed into the queue" << endl;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x;
        s.push(x);
    }
    c =  interleave(s);
    cout<<endl;
    cout<<"Resultant queue elements are :-"<<endl;
    while(!c.empty())
    {
        cout<<c.front()<<" , ";
        c.pop();
    }


}