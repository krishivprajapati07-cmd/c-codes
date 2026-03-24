#include<iostream>
using namespace std;
class employee
{
    protected:
    int empid;
    string name;
    double salary;

    public:
    void getemployee()
    {
        cout<<"enter your employee id:";
        cin>>empid;
        cout<<"enter your employee name:";
        cin>>name;
        cout<<"enter salary:";
        cin>>salary;
    }
    void displayemployee()
    {
        cout<<"\nemployee ID:"<<empid;
        cout<<"\nname:"<<name;
        cout<<"\nsalary"<<salary;
    }
};
class department : public employee
{
    protected:
    string deptname;

    public:
    void getdepartment()
    {
        getemployee();
        cout<<"enter your department name:";
        cin>> deptname;
    }
    void displaydepartment()
    {
        displayemployee();
        cout<<"\ndepartment:"<<deptname;
    }
};

