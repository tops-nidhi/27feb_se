// WAP to create calc in console(menu driven/ take the user's choice)
#include<stdio.h>
int main()
{
    int expression;
    int no1, no2;

    printf("\nEnter the value of no1:");
    scanf("%d", &no1);
    printf("\nEnter the value of no2:");
    scanf("%d", &no2);

    // Pass the menu
    printf("\n1.Add\n2.Division\n3.Subtraction\n4.Multiplication");
    // Take the user's choice
    printf("\nEnter your choice:");
    scanf("%d", &expression);

    // Switch case used when we want to give the user choice...

    switch (expression)
    {
        case 1:
            printf("\nAddition is:%d", no1 + no2);
            break;
            
        case 2:
            printf("\nDivision is:%f", (float)no1 / (float)no2);
            break;
        
        case 3:
            printf("\nSubtraction is:%d", no1 - no2);
            break;
        
        case 4:
            printf("\nMultiplication is:%d", no2*no1);
            break;

        default:
            printf("\nEnter valid choice............");
            break;
    }
}