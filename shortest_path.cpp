#include <iostream>
using namespace std;
int main()
{
    char route[100];
    cin.getline(route, 100);
    int x = 0, y = 0, i;
    for (i = 0; route[i] != '\0'; i++)
    {
        switch (route[i])
        {
        case 'N':
            y++;
            break;
        case 'S':
            y--;
            break;
        case 'E':
            x++;
            break;
        case 'W':
            x--;
            break;
        }
    }
    if(x>=0 &&y>=0)//First Quadrant
    {
        while(y--)
        {
            cout<<"N";
        }
        while(x--)
        {
            cout<<"E";
        }
    }
    else if(x<0 && y>=0)//Second Quadrant
    {
        while(y--)
        {
            cout<<"N";
        }
        while(x++)
        {
            cout<<"W";
        }
    }
    else if(x<0 && y<0)//Third Quadrant
    {
        while(y++)
        {
            cout<<"S";
        }
        while(x++)
        {
            cout<<"W";
        }
    }
    else if(x>=0 && y<0)//Fourth Quadrant
    {
     while(y++)
        {
            cout<<"S";
        }
        while(x--)
        {
            cout<<"E";
        }   
    }
    return 0;

}