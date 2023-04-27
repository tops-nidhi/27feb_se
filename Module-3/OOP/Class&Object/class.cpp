#include<iostream>
using namespace std;
class ClassDemo
{
private:
    int no;
public:

    int getdata()
    {
        cout<<"Enter the value of the no:";
        cin>>no;
        return 0;
    }
protected:
    int showdata()
    {
        cout<<"\nValue of no is:"<<no;
        return 0;
    }
};
int main()
{
    ClassDemo obj;
    obj.getdata();
    // obj.showdata();
    return 0;
}