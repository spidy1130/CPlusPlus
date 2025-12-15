#include<iostream>
#include<string.h>
using namespace std;
class Student
{
    private:
    int rollNo;
    char name[20];
    int age;
    public:
    Student()
    {
        rollNo=12;
        strcpy(name,"Aman Azad");
        age=21;
    }
    void display()
    {
        cout<<"rollNo.= "<<rollNo<<endl<<"Name= "<<name;
        cout<<endl<<"Age= "<<age;
    }
};
int main()
{
    Student s;
    s.display();
    return 0;
}