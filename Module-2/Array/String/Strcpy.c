#include<string.h>
#include<stdio.h>
int main()
{
    char str1[20], str2[20];
    printf("Enter your first string:");
    scanf("%s", &str1);
    strcpy(str2, str1);
    printf("\nYour second string is:%s", str2);
    return 0;
}