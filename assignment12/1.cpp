#include<iostream>
#include<string>
using namespace std;
class Person
{
    string name;
    int age;
    public:
        void setName(string n)
        {
            name=n;
        }
        void setAge(int n)
        {
            age=n;
        }
        string getName()
        {
            return name;
        }
        int getAge()
        {
            return age;
        }
        void printDetails()
        {
            // cout<<"ID- "<<id<<endl;
            cout<<"Name- "<<name<<endl;
            cout<<"Age- "<<age<<endl;
            // cout<<"Salary- "<<salary<<endl;
        }
};
class Employee:public Person
{
    int id;
    float salary;
    public:
        void setId(int n)
        {
            id=n;
        }
        void setSalary(float n)
        {
            salary=n;
        }
        int getId()
        {
            return id;

        }
        float getSalary()
        {
            return salary;
        }
        void printDetails()
        {
            cout<<"ID- "<<id<<endl;
            cout<<"Name- "<<getName()<<endl;
            cout<<"Age- "<<getAge()<<endl;
            cout<<"Salary- "<<salary<<endl;
        }
};
int main()
{
    Employee e1;
    e1.setId(1);
    e1.setName("Aman Baranwal");
    e1.setAge(21);
    e1.setSalary(100000.0);
    e1.printDetails();
    Person p;
    p.setAge(22);
    p.setName("Kunal Singh");
    p.printDetails();
    return 0;
}