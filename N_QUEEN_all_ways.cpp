#include <bits/stdc++.h>
using namespace std;
bool canPlace(int arr[][20], int n, int x, int y)
{
    //columns
    for (int k = 0; k < x; k++)
    {
        if (arr[k][y] == 1)
        {
            return false;
        }
    }
    //Left diagonal
    int i = x, j = y;
    while (i >= 0 and j >= 0)
    {
        if (arr[i][j] == 1)
        {
            return false;
        }
        i--;
        j--;
    }
    //Right diagonal
    i = x, j = y;
    while (i >= 0 and j < n)
    {
        if (arr[i][j] == 1)
        {
            return false;
        }
        i--;
        j++;
    }
    return true;
}
void printQueen(int n, int arr[][20])
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    cout<<endl;
}
int solveNqueen(int n, int arr[][20], int i)
{
    //BASE CASE
    if (i == n)
    {
        printQueen(n, arr);
        return 1;
    }
    //REC CASE
    int ways = 0;
    for (int j = 0; j < n; j++)
    {

        if (canPlace(arr, n, i, j)) //CHECK WHETHER THE CURRENT i,j is safe of not
        {
            arr[i][j] = 1; //PLACING THE QUEENS
            ways += solveNqueen(n, arr, i + 1);
            //BACKTRACK
            arr[i][j] = 0; //REMOVING THE QUEENS
        }
    }
    return ways; 
}
int main()
{
    int arr[20][20] = {0};
    int n;
    cout << "Enter the value of n :" << endl;
    cin >> n;
    int x = solveNqueen(n, arr, 0);
    
    cout << "Number of ways to solve NQueens problem is :- "<<x;
    return 0;
}