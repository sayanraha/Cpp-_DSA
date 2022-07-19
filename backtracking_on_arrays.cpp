#include<iostream>
using namespace std;
void printArray(int *arr,int n)
{
    for(int i = 0;i< n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void fillArray(int *arr,int i,int n,int val)
{
    //Base case
    if(i==n)
    {
        printArray(arr,n);
        return;
    }
    //Recursive case
    arr[i]= val;
    fillArray(arr,i+1,n,val+5);
    //Backtracking step
    arr[i]= -1 * arr[i];
}
int main()
{
    int arr[10] = {0};
    int n;
    cin>>n;
    fillArray(arr,0,n,10);
    printArray(arr,n);
}