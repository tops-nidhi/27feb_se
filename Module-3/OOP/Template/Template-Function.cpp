#include<iostream>
using namespace std;
template <class t>
t add(t a, t b)
{
    return a+b;
}
int main()
{
    cout<< add<int>(12, 56) <<endl;
    cout<< add<float>(1.2, 5.6) <<endl;
    return 0;
}