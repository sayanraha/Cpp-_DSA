//Dynamic memory allocation program in 1D array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int *arr = new int[n];//Allocating memory dynamically 
    cout<<"Enter elements in the array"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Elements in the array is :-"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<",";
    }
    delete [] arr;// FREED up the memory after usage
    return 0;
}