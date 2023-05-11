// In Function overriding function name same parameter same but different class.
#include<iostream>
using namespace std;
class Base
{
public:
    int base(int a)
    {
        a++;
        return a;
    }
};
class Parent
{
public:
    int base(int a)
    {
        a++;
        return a;
    }
};
int main()
{
    Base b1;
    Parent p1;
    cout<<" After increment of the base a is:"<< b1.base(5) <<endl;
    cout<<" After increment of the parent a is:"<< p1.base(7);
    
    return 0;
}
