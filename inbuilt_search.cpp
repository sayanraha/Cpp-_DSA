#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,num;
    cout<<"Enter size of the vector "<<endl;
    cin>>n;
    vector<int> arr;
    cout<<"Enter elements in the vector "<<endl;
    for(int i = 0;i<n;i++)
    {
        cin>>num;
        arr.push_back(num);
    }
    int key;
    cout<<"Enter the element to be searched "<<endl;
    cin>>key;
    
    vector <int> :: iterator it = find(arr.begin(),arr.end(),key);
    if(it!=arr.end())
    {
        cout<<"Element found at index = "<<it - arr.begin()<<endl;
    }
    else
    {
        cout<<"Element not found"<<endl;
    }
    
    return 0;
    
}