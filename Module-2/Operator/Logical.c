// WAP to take 1 condition
/*
    &&(Logical AND) - (a>0 && b<0)
    ||(Logical OR)
    !(Logical Not)
*/
#include<stdio.h>
int main()
{
    int no1, no2;

    printf("Enter the value of no1 and no2:");
    scanf("%d%d", &no1, &no2);

    if (!(no1<0 || no2>0))
    {
        printf("\nTrue");
    }
    else
        printf("\nFalse");
    return 0;
}