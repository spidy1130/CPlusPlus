#include<iostream>
using namespace std;
class Product;
class Item
{
    int x;
    public:
        Item()
        {}
        Item(int n)
        {
            x=n;
        }
        void setItem(int n)
        {
            x=n;
        }
        operator int()
        {
            return x;
        }
        void showItem()
        {
            cout<<x<<endl;
        }
        int getItem()
        {
            return x;
        }
       // operator Product();
};
class Product
{
    int x,y;
    public:
        Product()
        {}
        Product(Item i)
        {
            x=i.getItem();
            y=i.getItem();
        }
        Product(int n)
        {
            x=y=n;
        }
        Product(int n,int m)
        {
            x=n;y=m;
        }
        void setData(int n,int m)
        {
            x=n;y=m;
        }
        void show()
        {
            cout<<x<<" "<<y<<endl;
        }
        operator int()
        {return x;}
        operator Item()
        {
            return x;
        }
};
int main()
{
    int x=6;
    Item i1,i2=6;
    Product p1;
    p1.setData(3,4);
    i1=p1;
    i1.showItem();
    p1.show();
    p1=i2;
    p1.show();
    return 0;
}