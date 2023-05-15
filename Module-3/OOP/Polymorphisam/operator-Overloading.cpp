// Use to overload the operator
#include<iostream>
using namespace std;
class Operator
{
public:
    int no;
    Operator(int n)
    {
        no = n;
    }
    Operator operator ++()
    {
        no++;
    }
    int show()
    {
        cout<<"Value of no is: "<< no<< endl;
        return 0;
    }
};
int main()
{
    Operator obj(20);
    obj.show();
    ++obj;
    obj.show();
    return 0;
}
