// WAP to check the user is elligible for vote or note
#include<stdio.h>
int main()
{
    int age;
    printf("\nEnter your age to check wether you are elligble for vote or not:");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Your elligible for vote.");
    }
    else{
        printf("\nNot elligible for vote.");
    }

}