// WAP to check relation between 2 operands.
/*
a = 10; 
b = 15;
    >  - (a > b)  -> false(0)
    >= - (a >= b) -> false(0)
    <  - (a < b)  -> True(1)
    <= - (a <= b) -> True(1)
    == - (a == b) -> False(0)
    != - (a != b) -> True(1)
*/
#include<stdio.h>
int main()
{
    int no1, no2;

    // Take the user's input 
    printf("Enter the value of no1:"); 
    scanf("%d", &no1);
    printf("Enter the value of no 2:");
    scanf("%d", &no2);
    
    // check the relation 
    if (no1 != no2)
    {
        printf("\nTrue");
    }
    else
    {
        printf("\nFalse");
    }
    return 0;
}