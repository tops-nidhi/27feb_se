//WAP to calculate assignment operator
/*
    a = 23;
    b = 3;

    Assignment operator's are:-
    1.'+='  -> a += b -> a = a + b -> a = 23 + 3 -> a = 26
    2.'-='  -> a -= b -> a = a - b -> a = 23 - 3 -> a = 
    3.'*='  -> a *= b -> a = a * b -> a = 23 * 3 -> a = 
    4.'/='  -> a /= b -> a = a / b -> a = 23 / 3 -> a = 
    5.'%='  -> a %= b -> a = a % b -> a = 23 % 3 -> a = 
*/

#include<stdio.h>
int main()
{
    int a , b;

    printf("Enter the value of a:"); // Pass the msg to take user input
    scanf("%d", &a); //Use to take the user's input
    printf("Enter the value of b:"); // Pass the msg to take user input
    scanf("%d", &b); //Use to take the user's input
    
    /*
    //Addition of the a and b is:
    // '\n' is use for the new line,  it's part of the escape sequence, isn't neceessary
        a += b;
        printf("\nAddition of a and b is:%d", a);
    */
    
    return 0;
}