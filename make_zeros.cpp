//BASIC APPROACH
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cout<<"Enter the number of rows and columns"<<endl;
    cin>>m;
    vector<vector<int>> arr(m);
    int x;
    cout<<"Enter elements in the vector"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            cin>>x;
            arr[i].push_back(x);
        }
    }
    cout<<endl;
    cout<<"Original Vector is :-"<<endl;
    for(int i=0;i<arr.size();i++)
    {
        for(auto j:arr[i])
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    vector<int> row(m,1);
    vector<int> col(m,1);
    for(int i = 0;i<arr.size();i++)
    {
        for(int j=0;j<arr.size();j++)
        {
            if(arr[i][j]==0)
            {
                row[i]=0;col[j]=0;
                
            }
        }
    }
    for(int i = 0;i<m;i++)
    {
        if(row[i]==0)
        {
            for(int j=0;j<m;j++)
            arr[i][j]=0;
        }
    }
    for(int j = 0;j<m;j++)
    {
        if(col[j]==0)
        {
            for(int i=0;i<m;i++)
            arr[i][j]=0;
        }
    }
    cout<<endl;
    for(int i=0;i<arr.size();i++)
    {
        for(int j = 0;j<arr.size();j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    

}