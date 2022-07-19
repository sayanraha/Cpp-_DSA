#include<iostream>
using namespace std;
void print_pair(int arr[],int n)
{
    int i,j,x,y;
    for(i=0;i<n;i++)
    {
        x = arr[i];
        for(j=i+1;j<n;j++)
        {
            y = arr[j];
            cout<<x<<" , "<<y<<endl;
        }
        cout<<endl;
    }

}
int main()
{
    int arr[]={70,80,90,100,150,200};
    int n = sizeof(arr)/sizeof(int);
    print_pair(arr,n);
    return 0;
}