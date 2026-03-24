#include<iostream>
using namespace std;
class area
{
    public:
 void triangle()
 {
    float b,h;
     cin>>b>>h;
    cout<<"area of triangle ="<<0.5*b*h<<endl;
    
 }
 void circle()
 {
    float r;
    cin>>r;
    cout<<"area of circle="<<3.14*r*r<<endl;

    
 }
};
 int main()
 {
    area kp;
    kp.triangle();
    kp.circle();

 }
 
