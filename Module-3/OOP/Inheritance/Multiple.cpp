// Multiple inheritance :- Multiple Base class and Single derived class
#include<iostream>
using namespace std;
class A
{
public:
    A()
    {
        cout<<endl<<"This is base A.";
    }
};
class B{
public:
    B()
    {
        cout<<endl<<"This is base B.";
    }
};
class C{
public:
    C()
    {
        cout<<endl<<"This is Base C.";
    }
};
class D : public A, public B, public C
{
public:
    D()
    {
        cout<<endl<<"This is derived class D.";
    }
};
int main()
{
    D d1;
    return 0;
}
