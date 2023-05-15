#include<iostream>
using namespace std;
template <typename T>
class Template
{
public:
    T div(T a, T b)
    {
        return a/b;
    };
};
int main()
{
    Template <int> t1;
    cout<< t1.div(5, 2) <<endl;
    Template <float> t2;
    cout<< t2.div(5, 2) <<endl;
    return 0;
}