#include <iostream>
#include <vector>
#include <string>
#include <map>
using namespace std;
int main()
{
    map<string, vector<string>> phonebook;

    phonebook["Arun"].push_back("990314225");
    phonebook["Arun"].push_back("9903147777");
    phonebook["Sumit"].push_back("547122230");
    phonebook["Sumit"].push_back("214546444");

    
    int c = 0;
    for(auto x: phonebook)
    {
        int c = 0;
        cout<<x.first;
        if(c < sizeof(x.second))
        {
        cout<<" ---> "<<x.second[c]<<" , ";
        c = c + 1;
        }
        cout<<endl;
    }
}