// WAP to demonstrate value is positive or negative.
#include<stdio.h>
int main()
{
    int no;
    printf("Enter the value of no:");
    scanf("%d", &no);
    if (no > 0)
        printf("\nNo is positive.");

    // Else-if when we want multiple outer condition
    else if (no == 0)
    {
        printf("\nNo is zero.");
    } 

    else
        printf("\nNo is negative.");
}