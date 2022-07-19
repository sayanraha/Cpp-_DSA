//Program to count the number of alphabets, digits & spaces in the sentence.
#include <iostream>
using namespace std;
int main()
{
    char sen[100];
    int alpha = 0, digit = 0, space = 0;
    char temp = cin.get();
    int len = 0;
    while (temp != '\n')
    {
        sen[len++] = temp;
        temp = cin.get();
        if (temp == ' ')
        {
            space++;
        }
        else if (temp == '0' || temp == '1' || temp == '2' || temp == '3' || temp == '4' || temp == '5' || temp == '6' || temp == '7' || temp == '8' || temp == '9')
        {
            digit++;
        }
        else
        {
            alpha++;
        }
    }
    cout<<"Alphabet = "<<alpha<<" Digits = "<<digit<<" Spaces = "<<space<<endl;
    return 0;
}
