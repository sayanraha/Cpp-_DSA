//NEXT GREATER ELEMENT USING STACK
//TIME COMPLEXITY USING STACK - O(n)
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
vector<int> NGE(vector<int> arr)
{
    int n = arr.size();
    vector<int> arr1(n, 0);
    stack<int> v;

    for (int i = n - 1; i >= 0; i--)
    {
        while (!v.empty() and v.top() <= arr[i])
        {
            v.pop();
        }
        if (v.empty())
        {
            arr1[i] = -1;
        }
        else
        {
            arr1[i] = v.top();
        }
        v.push(arr[i]);
    }
    return arr1;
}
int main()
{
    int n, p;
    cin >> n;
    vector<int> v;
    cout << "ENTER ELEMENTS INTO THE VECTOR " << endl;
    for (int i = 0; i < n; i++)
    {
        cin>>p;
        v.push_back(p);
    }
    vector<int> output = NGE(v);
    cout<<"NEXT GREATER ELEMENT ARE :"<<endl;
    for(int i = 0;i<v.size();i++)
    {
        cout<<output[i]<<",";
    }
    cout<<endl;
    return 0;
}