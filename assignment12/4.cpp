/*Write a C++ program to design a base class Person (name, address,
phone_no). Derive a class Employee (eno, ename) from Person. Derive a
class Manager (designation, department name, basic-salary) from
Employee. Write a menu driven program to:
a. Accept all details of 'n' managers.
b. Display manager having highest salary*/
#include<iostream>
using namespace std;
class Person
{
    string name;
    string address;
    long long phone;
    public:
        void setName(string n)
        {
            name=n;
        }
        void SetAddress(string n)
        {
            address=n;
        }
        void setPhone(long long n)
        {
            phone=n;
        }
        string getName()
        {
            return name;
        }
        long long getPhone()
        {
            return phone;
        }
        string getAddress()
        {
            return  address;
        }
        void printDetails()
        {
            // cout<<"ID- "<<id<<endl;
            cout<<"Name- "<<name<<endl;
            cout<<"Phone no- "<<phone<<endl;
            cout<<"Address- "<<address<<endl;
        }
};
class Employee:public Person
{
    int eno;
    public:
    void setEno(int n)
    {
        eno=n;
    }
    int getEno()
    {
        return eno;
    }
};
class Manager:public Employee
{
    string degi;
    string dName;
    float salary;
    public:
    void setDegi(string n)
    {
        degi=n;

    }
    string getDegi()
    {
        return degi;
    }
    void setDName(string n)
    {
        dName=n;
    }
    string getDName()
    {
        return dName;
    }
    void setSalary(float n)
    {
        salary=n;
    }
    float getSalary()
    {
        return salary;
    }
    int highestSalary(Manager *p,int n)
    {
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(p[i].getSalary()>p[j].getSalary())
                j=i;
        }
        return j;
    }
};
int main()
{
    cout<<"how many manager you want to enter: ";
    int n;
    cin>>n;
    int j;
    Manager *ptr= new Manager[n];
    for(int i=0;i<n;i++)
    {
        cout<<"_______Enter details of manager:______\n";
        int x;
        long long k;
        float y;
        string z;
        cout<<"Enter employee no: ";
        cin>>x;
        ptr[i].setEno(x);
        cout<<"enter name: ";
        cin>>z;
        ptr[i].setName(z);
        cout<<"enter Address: ";
        cin>>z;
        ptr[i].SetAddress(z);
        cout<<"enter Phone no: ";
        cin>>k;
        ptr[i].setPhone(k);
        cout<<"enter Degignation: ";
        cin>>z;
        ptr[i].setDegi(z);
        cout<<"enter department name: ";
        cin>>z;
        ptr[i].setDName(z);
        cout<<"enter Basic Salary: ";
        cin>>y;
        ptr[i].setSalary(y);
        if(i==0)
           j=0;
        if(i==(n-1))
        {
            j=ptr->highestSalary(ptr,n);
        }
    }
    cout<<"Manager with highest salary is "<<ptr[j].getSalary()<<" and Manager name is "<<ptr[j].getName();
    delete []ptr;
    return 0;
}