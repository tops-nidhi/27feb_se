#include<iostream>
using namespace std;
int a = 100; 
int main()
{
    int a = 10;
    cout<<"Value of local variable a is:"<<a;
    // Print globle value using scope resolution operator
    cout<<endl<<"Value of global variable a is:"<<::a;
    return 0;
}
