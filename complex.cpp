#include<iostream>
using namespace std;
class complex 
{
    private:
    int real;
    int imag;

    public:
    complex(int r = 0 , int i = 0)
    {
        real = r;
        imag = i;
    }
    complex operator+(const complex &obj)
    
    {
        complex temp;
        temp.real=real + obj.real;
        temp.imag=imag +obj.imag;
        return temp;
    }
    void display()
    {
        cout<<real<<"+"<<imag<<"i";
    }
};
int main() 
{
    complex c1(3,4);
    complex c2(5,6);
    complex c3 = c1 + c2;
    c3.display();
    return 0;
}