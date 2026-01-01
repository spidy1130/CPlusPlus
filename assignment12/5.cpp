#include<iostream>
using namespace std;
class Item
{
    int itemNo;
    string name;
    float price;
    public:
        void setItemNo(int n)
        {
            itemNo=n;
        }
        int getItemNo()
        {
            return itemNo;
        }
        void setName(string n)
        {
            name=n;
        }
        string getName()
        {
            return name;
        }
        void setPrice(float n)
        {
            price=n;
        }
        float getPrice()
        {
            return price;
        }
};
class DiscountedItem:public Item
{
    int discountPercent;
    float discountPrice;
    //static float total;
    public:
        void setPercent(int n)
        {
            discountPercent=n;
        }
        int getPercent()
        {
            return discountPercent;
        }
        void setDisPrice(float n)
        {
            discountPrice=n;
        }
        void printItem(int n)
        {
            for(int i=0;i<n;i++)
            {
                cout<<"Item No: "<<this[i].getItemNo()<<endl;
                cout<<"Item Name: "<<this[i].getName()<<endl;
                cout<<"Item Price: "<<this[i].getPrice()<<endl;
                cout<<"Discount Percent: "<<this[i].discountPercent<<endl;
                cout<<"Discounted Price: "<<this[i].getPrice()-this[i].discountPrice<<endl;
                cout<<"-------------------------\n";

            }
        }
        // static void countTotal(int n)
        // {
        //     float sum=0;
        //     for(int i=0;i<n;i++)
        //     {
        //         sum+=
        //     }
        // }
        void printTotal(int n)
        {
            float sumT=0,sumD=0;
            for(int i=0;i<n;i++)
            {
                sumT+=this[i].getPrice();
                sumD+=this[i].discountPrice;
            }
            cout<<"Total Price: "<<sumT<<endl;
            cout<<"Total Discount: "<<sumD<<endl;
            cout<<"Final Price(with discount): "<<sumT-sumD;
        }
};
//float DiscountedItem::total=0;
int main()
{
    cout<<"How many items you want to enter";
    int n;
    cin>>n;
    DiscountedItem *ptr=new DiscountedItem[n];
    for(int i=0;i<n;i++)
    {
        int x;float y;string z;
        cout<<"Enter Item name: ";
        cin>>z;
        ptr[i].setName(z);
        cout<<"Enter Item no: ";
        cin>>x;
        ptr[i].setItemNo(x);
        cout<<"Enter Item price: ";
        cin>>y;
        ptr[i].setPrice(y);
        cout<<"Enter Discount: ";
        cin>>x;
        ptr[i].setPercent(x);
        y=((y*x)/100);
        ptr[i].setDisPrice(y);
        cout<<"-------------------------\n";
    }
    ptr->printItem(n);
    ptr->printTotal(n);
    return 0;
}