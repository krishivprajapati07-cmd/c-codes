#include<iostream>
using namespace std;

class overload
{
    public:
    void print(int num)
    {
        cout<<"printing integer:"<<num<<endl;    
    }
    void print(double num)
    {
        cout<<"printing double:"<<num<<endl; 

    }
    void print(string text)
    {
        cout<<"printing string:"<<text<<endl; 

    }

};
int main()
{
    overload obj;

    obj.print(5);
    obj.print(10.5);
    obj.print("hello world");
}