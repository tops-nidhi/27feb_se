// WAP to demonstrate without return type and with parameter
#include<stdio.h>
void data(int no, float id)  //Call by value
{
    printf("Value of no:%d", no);
    printf("\nValue of id:%f", id);
}
int main()
{
    data(48, 101);
    return 0;
}
