// Function overloading is same name of the function same class nut different parameter(arguments)
#include<iostream>
using namespace std;
class Overloading
{
public:
    int add(int a, int b)
    {
        return a + b;
    }
    int add(int a, int b, int c)
    {
        return a + b + c;
    }
};
int main()
{
    Overloading over;
    cout << "Addition of 2 numbers is : " << over.add(2, 3) << endl;
    cout << "Addition of 3 numbers is : " << over.add(2, 3, 5) << endl;
}