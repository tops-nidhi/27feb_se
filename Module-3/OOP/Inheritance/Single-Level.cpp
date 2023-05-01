// Single level inheritance
// One Base(parent) class one Derived(child) class
#include<iostream>
using namespace std;
class Base{
public:
    int no;
    int data()
    {
        cout<<"Enter the value of no:";
        cin>>no;
        return 0;
    };
};
class derived : public Base
{
public:
    int display()
    {
        cout<<"Value of no is:"<<no;
        return 0;
    }
};
int main()
{
    derived der;
    der.data();   
    der.display();
    return 0;
}
