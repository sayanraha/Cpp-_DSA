//2D dynamic allocation of memory
#include <bits/stdc++.h>
using namespace std;
int **create2D(int rows, int cols)
{
    //2D DYNAMIC ARRAY
    int **arr = new int *[rows];
    //Allocation of memory for each row
    for (int i = 0; i < rows; i++)
    {
        arr[i] = new int[cols];
    }
    //Initializing the array with increasing list of numbers
    int val = 0;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            arr[i][j] = val;
            val++;
        }
    }
    return arr;
}
int main()
{
    int rows, cols;
    cout << "Enter no of rows" << endl;
    cin >> rows;
    cout << "Enter no of columns" << endl;
    cin >> cols;
    int **arr = create2D(rows, cols);//Calling the function
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    for (int i = 0; i < rows; i++)
        delete[] arr[i]; //Delete the inner

    delete[] arr; //To delete the outer array which contained the pointers of all the inner arrays
}