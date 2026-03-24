#include<iostream>
using namespace  std;
class student
{
    protected:
    int rollno;
    string name;

    public:
    void getstudent()
    {
        cout<<"enter your roll number:";
        cin>>rollno;
        cout<<"enter name:";
        cin>>name;
    }
     void displaystudent()
     {
        cout<<"\n roll number:"<<rollno;
        cout<<"\n name:"<<name;
     }
};

 class result : public student 
 {
    private:
    int marks;

    public:
    void getresult()
    {
        getstudent();
        cout<<"enter marks:";
        cin>>marks;
    }
    void displayresult()
    {
        displaystudent();
        cout<<"\n marks:"<<marks<<endl;
    }
 };
 int main()
 {
    result s1;
    s1.getresult();
    s1.displayresult();

    return 0;
 }