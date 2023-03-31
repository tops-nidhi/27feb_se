// WAP to check max value using conditional (tarnery) operator
#include<stdio.h>
int main()
{
    int a, b;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);
    /*
        syntax:
            ->(condition) ? (true) : (false) ;
            '?' is use to check the condition 
    */
   (a > b) ? (printf("\nA is max.")) : (printf("\nB is Max"));
}