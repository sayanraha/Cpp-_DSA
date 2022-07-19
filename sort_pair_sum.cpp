/*Sorted pair Sum
Given a sorted array and a number x, find a pair whoes sum is closest to x*/
//Time complexity of this program is O(N^2)[brute force technique]

/*#include<iostream>
using namespace std;
void sort_pair_sum(int arr[],int n,int val)
{
    int i,j,large = -1;
    int a,b,sum;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if((arr[i]+arr[j])<val)
            {
                a = arr[i];
                b = arr[j];
            }
        }
    }
    cout<<"The pair is = "<<"("<<a<<","<<b<<")"<<endl;
}
int main()
{
    int arr[] = {10,22,28,29,30,40},x;
    int n = sizeof(arr)/sizeof(int);
    cout<<"Enter the value of x "<<endl;
    cin>>x;
    sort_pair_sum(arr,n,x);
    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
void sort_pair_sum(int arr[],int n,int val)
{
    int s = 0,e = n-1,x,y;
    while(s < e)
    {
        if(arr[s]+arr[e]<val)
        {
            x = arr[s];
            y = arr[e];
        }
        s++;
        e--;
    }
    cout<<"The pair is = "<<"("<<x<<","<<y<<")"<<endl;
}

int main()
{
    int arr[] = {10,22,28,29,30,40},x;
    int n = sizeof(arr)/sizeof(int);
    cout<<"Enter the value of x "<<endl;
    cin>>x;
    sort_pair_sum(arr,n,x);
    return 0;
}
