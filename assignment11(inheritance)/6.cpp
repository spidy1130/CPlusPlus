#include<iostream>
using namespace std;
class Flight
{
    public:
        void search()
        {
            cout<<"flight search\n";
        }
        virtual void book()
        {
            cout<<"fligh book\n";
        }
};
class AirIndia:public Flight
{
    public:
        void book()
        {
            cout<<"AirIndia flight booked\n";
        }
};
class SpicJet: public Flight
{
    public:
        void book()
        {
            cout<<"SpiseJet flight booked\n";
        }
};
int main()
{
    Flight *flight1,*flight2;
    AirIndia ai;
    SpicJet sj;

    flight1=&ai;
    flight1->search();
    flight1->book();
    flight2=&sj;
    flight2->search();
    flight2->book();
    return 0;
}