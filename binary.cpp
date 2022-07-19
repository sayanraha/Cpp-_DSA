#include <iostream>
using namespace std;
int binary_search(int arr[],int n,int key)
{
    int s = 0;
    int e = n -1;
    while(s<=e)
    {
        int mid = (s+e)/2;
        if(arr[mid]==key)
        {
            return mid;
        }
        else if(arr[mid]>key)
        {
            e = mid - 1;
        }
        else 
        {
            s = mid + 1;
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
   int index =  binary_search(arr,n,key);
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