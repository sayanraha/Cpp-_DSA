//Program to check whether a string is palindrome or not
#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    char palin[30];
    char temp[30];
    int flag = 1;
    cout << "Enter the string to check" << endl;
    cin.getline(palin, 30);
    int len = strlen(palin);
    int j = len - 1;
    for (int i = 0; palin[i] != '\0'; i++)
    {
        temp[i] = palin[j];
        j--;
    }
    for (int i = 0; i < len; i++)
    {
        if (temp[i] != palin[i])
        {
            flag = 0;
            break;
        }
    }
    if (flag == 1)
    {
        cout << "Palindrome String" << endl;
    }
    else
    {
        cout << "Not a Palindrome String" << endl;
    }
    return 0;
}