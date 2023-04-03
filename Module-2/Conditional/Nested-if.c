// WAP to find max no from three no using nested condition
#include<stdio.h>
int main()
{
    int a, b, c;
    printf("Enter the no\n a:");
    scanf("%d", &a);
    printf("\nB:");
    scanf("%d",&b);
    printf("C:");
    scanf("%d",&c);
        if (a > b)
        {
            if (a > c)
            {
                printf("A is max.");                
            }
            else
            {
                printf("C is max.");
            }
        }
        else
        {
            if (b > c)
            {
                printf("B is max.");
            }
            else
            {
                printf("\nC is max.");
            }
        }
         
    return 0;
}