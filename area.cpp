#include <iostream>
using namespace std;
float area(float rd)
{
     double area;
     area = 3.142 * rd * rd;
     return area;
}
int main()
{
    float r;
    cout<<"Enter the radius of the circle "<<endl;
    cin>>r;
    cout<<"Area of the circle is = "<<area(r)<<" sq metre "<<endl;
}