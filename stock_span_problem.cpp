#include <iostream>
#include <stack>
using namespace std;
void stockspan(int price[], int n, int span[])
{
    stack<int> s; //Indices of the days
    s.push(0);
    span[0] = 1;
    //Loop for rest of the days
    for (int i = 1; i <= n - 1; i++)
    {
        int curr_price = price[i];
        //Topmost element that is higher than the current price
        while (!s.empty() and price[s.top()] <= curr_price)
        {
            s.pop();
        }
        if (!s.empty())
        {
            int prev_highest = s.top();
            span[i] = i - prev_highest;
        }
        else
        {
            span[i] = i + 1;
        }
        s.push(i);
    }
}
int main()
{
    int price[] = {100, 80, 60, 70, 60, 75,85};
    int n = sizeof(price) / sizeof(int);
    int span[10] = {0};
    stockspan(price, n, span);
    for(int i = 0;i<n;i++)
    {
        cout<<span[i]<<" ";
    }
}