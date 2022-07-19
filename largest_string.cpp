#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of sentences" << endl;
    cin >> n;
    cin.get();         //It is used to store the new line just after (enter key) has been ENTERED
    char sen[500];     //stores the current string
    char largest[500]; //stores the largest string
    int large = 0;     //stores the len of the largest string
    while (n--)
    {
        cin.getline(sen, 500); //Takes input from the user
        int len = strlen(sen); //Stores the len of the current string
        if (len > large)
        {
            large = len;
            strcpy(largest, sen); //Copies the largest string in largest array
        }
    }
    cout << "The largest string is :- " << largest << endl;
    return 0;
}