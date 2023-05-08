// Constant is used when there's no change in value
#include<stdio.h>
int main()
{
    const int no = 100; 
    printf("Value of no is:%d", no);
    //  Because of const define can't change value of no
    // no = 23;
    // printf("\nValue of no is:%d", no);
    
    return 0;
}