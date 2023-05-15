#include<iostream>
using namespace std;
class Base{
private:
    int id;

public:
    friend class Friend;

};
class Friend{
    public:
    void print(Base b1, int d){
        b1.id = d;
        cout<<b1.id<<endl;
    }
};
int main(){
    Base b;
    Friend f;
    f.print(b, 5);
    return 0;
    
}