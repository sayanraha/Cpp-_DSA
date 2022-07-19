#include<iostream>
#include<vector>
using namespace std;
void count(int arr[],int n)
{
    int large = -1;
    //Finding the largest element
    for(int i=0;i<n;i++)
    {
        large = max(large,arr[i]);
    }
    //Created a vector array of size (large+1) and initialized it with 0s
    vector<int> freq(large+1,0);
    //Updated the Vector array
    for(int i=0;i <n;i++)
    {
        freq[arr[i]]++;
    }
    //Sorting of the array
    int j=0;
    for(int i = 0;i<=large;i++)
    {
        while(freq[i]>0)
        {
            arr[j]= i;
            freq[i]--;
            j++;
        }
    }
}
int main()
{
    int arr[20];
    int n;
    cout<<"Enter the number of elements of the array"<<endl;
    cin>>n;
    cout<<endl;
    cout<<"Enter the elements"<<endl;
    for(int k = 0;k<n;k++)
    {
        cin>>arr[k];
    }
    count(arr,n);
    cout<<"Sorted array is :-"<<endl;
    for(int k=0;k<n;k++)
    {
        cout<<arr[k]<<",";
    }
    return 0;
}