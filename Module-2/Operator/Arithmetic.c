// WAP of arithmetic program
/*
    + -> Addition
    - -> Subtraction
    * -> Multiplication
    / -> Division
    % -> Modulo(return reminder)
    -> unary operator:-
    {
        ++ -> Increment(+1)
        -- -> Decrement(-1)
    }
*/
#include<stdio.h>

int main()  // Main method
{
    int a , b; // Variable for arithmetic use
    int ans; // To store the answer
    float div; // To store the division answer in point
    // Pass the msg to take user input
    
    printf("Enter value of the a:");
    scanf("%d", &a); //Use to take the user's input
    
    printf("Enter value of the b:");
    scanf("%d", &b); 

    /*ans = a + b; //Addition of the two values
    printf("\nAddition of the a and b is:%d", ans);*/

    /*ans = a - b; //Subtraction of the two values
    printf("\nSubtraction of the a and b is:%d", ans);
    */
   /* ans = a * b; //Multiplication of the two values
    printf("\nMultiplication of the a and b is:%d", ans);*/

    /*
        //Explicit type conversion (int to float)
        div = (float)a / (float)b;
        printf("\nDivision is : %f",  div);
    */
    
    /*
    ans = a % b;
    printf("\nModulo of a and b is: %d", ans);
    */

    /*
        ++a;
        printf("\nAfter increment value of a is:%d", a);
    */
    /*
        b--;
        printf("\nAfter decrement value b is:%d", b);
    */
    return 0;
}