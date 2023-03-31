// WAP to calculate bitwise operator
/*
    & - Bitwise And
    {
        2 - 010
        5 - 100
      ->0 - 000  
    }
    | - Bitwise Or
     {
        2 - 010
        5 - 100
      ->7 - 111  
    }
    ~ - Bitwise compliment
     {
        2 - 0000000000000010
    ->(-3) -1111111111111101
    }
    ^ - exclusive or (XOR)
    {
        3 - 011
        4 - 100
      ->7 - 111 
    }
    << - Shift left
    {
        2 - 000010
     -> 4 - 000100   
    }
    >> - Shift Right
    {
        2 - 0010
     -> 1 - 0001.0   
    }
*/
#include<stdio.h>
int main()
{
    int a, b;    
    int ans;
    printf("Enter the value of a and b:");
    scanf("%d%d", &a, &b);

    // Bitwise AND
    ans = a & b;
    printf("\nBitwise and of a and b is:%d", ans);

    //Bitwise OR
    ans = a | b;
    printf("\nBitwise OR of a and b is: %d", ans);

    // Bitwise XOR
    ans = a ^ b;
    printf("\nBitwise XOR of a and b is:%d", ans);

    // Bitwise compliment
    ans = ~a;
    printf("\nBitwise compliment of a is:%d", ans);

    // Bitwise shift left
    ans = a << 1;
    printf("\nBitwise shift left of a is:%d", ans);

    // Bitwise shift right 
    ans = a >> 1;
    printf("\nBitwise shift right of a is:%d", ans);
}