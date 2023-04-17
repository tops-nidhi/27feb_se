#include<stdio.h>
int fecto(int no)
{
    if(no <= 1)
    {
        return 1;
    }
    return no * fecto(no-1); //recursion function
}
int main()
{
    printf("Factorial of 7 is:%d",fecto(7));
    return 0;
}
