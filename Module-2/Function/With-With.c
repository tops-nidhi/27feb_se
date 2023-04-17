#include<stdio.h>
int data(int *ptr) // call by reference
{
    return *ptr;
}
int main()
{
    int a = 100;
    // ptr = &a;
    printf("%d",data(&a));
    return 0;
}
