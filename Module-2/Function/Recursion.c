// Recursion - Function call it self
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
    int no;

    printf("\nFactorial of 7 is:%d",fecto(7));
    printf("\nFactorial of 7 is:%d",fecto(5));
    printf("\nFactorial of 7 is:%d",fecto(6));
    return 0;
}
