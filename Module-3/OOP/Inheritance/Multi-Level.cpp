// Multi-level inheritance
// One grand parent class, one parent class and one child class
#include<iostream>
using  namespace std;
class A
{
public:
    // Default constructor
    A()
    {
        cout<<"This is constructor A.";
    }
};
class B: public A
{
public:
    B()
    {
        cout<<endl<<"This is constructor B.";
    }
};
class C : public B
{
public:
    C()
    {
        cout<<endl<<"This is constructor C.";
    }
};
int main()
{
    
    C c1;
    return 0;
}