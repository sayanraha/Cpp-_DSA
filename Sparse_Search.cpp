#include <iostream>
#include<cstring>
using namespace std;

int sparse_search(string arr[],int n, string key)
{
    int s = 0, e = n - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        int mid_left = mid - 1;
        int mid_right = mid + 1;
        if (arr[mid] == "") // Imp step
        {
            while (1)
            {
                if (mid_left < s and mid_right > e)
                {
                    return -1;
                }
                else if (mid_right <= e and arr[mid_right] != "")
                {
                    mid = mid_right;
                    break;
                }
                else if (mid_left >= s and arr[mid_left] != "")
                {
                    mid = mid_left;
                    break;
                }
                mid_left--;
                mid_right++;
            }
        }
        else if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
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
   string  arr[] = {"ai", "", "", "bat", "", "", "car", "cat", "", "", "dog", ""};
    // string key = "car";
    int n = 12;
    cout << sparse_search(arr,n, "bat") << endl;
    return 0;
}