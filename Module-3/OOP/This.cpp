#include<iostream>
using namespace std;
class This
{
public:  
    // Data Member
    int no = 100;
    int thiss()
    {
        int no = 10;
        cout<<"Value of local variable no is:"<<no;
        cout<<"\nValue of data  member no is:"<<this->no;
        return 0;
    }
};
int main()
{
    This obj;
    obj.thiss();
    return 0;
}
