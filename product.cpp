#include <bits/stdc++.h>
using namespace std;

class Product
{
private:
    int id;
    char name[100];
    int mrp;
    int sp;

public:
    //Parameterize constructor
    Product(int id, char *n, int mrp, int sp)
    {
        this->id = id;
        this->mrp = mrp;
        this->sp = sp;
        strcpy(name, n);
    }
    Product(Product &X)
    {
        id = X.id;
        mrp = X.mrp;
        sp = X.sp;
        strcpy(name, X.name);
    }
    //Setters
    void setMrp(int price)
    {
        if (price > 0)
        {
            mrp = price;
        }
    }
    void setSP(int price)
    {
        if (price > mrp)
        {
            sp = mrp;
        }
        else
        {
            sp = price;
        }
    }
    //Getters
    int getMrp()
    {
        return mrp;
    }
    int getSP()
    {
        return sp;
    }
    void display()
    {
        cout << "Name = " << name << endl;
        cout << "ID = " << id << endl;
        cout << "MRP = " << mrp << endl;
        cout << "SELLING PRICE = " << sp << endl;
        cout << "--------------------" << endl;
    }
};
int main()
{
    Product mobile(1100, "Sony", 35000, 27000);
    Product webcam = mobile;
    Product Laptop(mobile);
    mobile.display();
    webcam.display();
    Laptop.display();

    /*mobile.mrp = 14000;
    mobile.sp= 12000;*/

    /* mobile.setMrp(7000);
    mobile.setSP(14000);*/
    /*cout << "MRP = " << mobile.getMrp() << endl;
    cout << "SELLING PRICE = " << mobile.getSP() << endl;*/
    return 0;
}
