#include<iostream>
using namespace std;
class Abstract
{
    string nm = "nidhi";
public:
    int data()
    {
        cout<<"Your name is:"<<nm;
        return 0;
    }   
};
int main()
{
    Abstract abs;
    abs.data();
    return 0;
}
