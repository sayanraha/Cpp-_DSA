//Pass by reference using reference variables
#include<bits/stdc++.h>
using namespace std;
void tax(int & money)//int & money is the reference variable which is storing the reference of salary variable.
{
    float t = 0.20;
    money = money - (t*money);
}
int main()
{
    int salary = 1000;
    tax(salary);
    cout<<"Salary after taxation is = "<<salary<<endl;
}