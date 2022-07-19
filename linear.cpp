#include <iostream>
using namespace std;
int linear_search(int arr[],int n,int key)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==key)
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[50];
    int n,i,key;
    cout<<"Enter the number of elements"<<endl;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Enter the element to be found"<<endl;
    cin>>key;
   int index =  linear_search(arr,n,key);
    if (index!= -1)
    {
        cout<<key<<" is present at index "<<index<<endl;
    }
    else
    {
        cout<<key<<" NOT Found! "<<endl;
    }
    return 0;
}