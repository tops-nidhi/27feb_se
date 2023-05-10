// Hybrid inheritance is combination of more then one inheritance 
#include<iostream>
using namespace std;
class A
{
public:
    int a;
    int adata(int a)
    {
        this->a = a;
        return a;
    }
};
class B : virtual public A
{
public:
int b;
    int bdata(int b)
    {
        this->b = b;
        if(a >= b)
        {
            return a-b;
        }
        else{
            return b-a;
        }
    }
};
class C : virtual public A
{
public:
    int c;
    int cdata(int c)
    {
        this->c = c;

        if(a%c == 0)
        {
            return a/c;
        }
        else
        {
            return 1;
        }
    }
};
class D: public B, public C
{
public:
    inline int ddata(){ return a+b+c; }
};
int main()
{
    D d1;
    cout<<endl<<d1.adata(12);
    cout<<endl<<d1.bdata(8);
    cout<<endl<<d1.cdata(4);
    cout<<endl<<d1.ddata();
    return 0;
}
