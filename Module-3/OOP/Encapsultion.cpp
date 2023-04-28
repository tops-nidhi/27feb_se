#include<iostream>
using namespace std;
class Capsual
{
    int id = 101;
    string nm = "Deep";
public:
    int get(){
        cout<<nm<<" your id is:"<< id;
        return 0;
    };
};
int main()
{
    Capsual cap;
    cap.get();
    return 0;
}
