#include<stdio.h>
int main()
{
    // char str[20] = {'a','b','c','d'}; 
    // char str[20] = {"abcd"};
    char str[20];
    printf("Enter your string:");
    scanf("%s", &str);
    printf("Value of string is:%s", str);
    return 0;
}