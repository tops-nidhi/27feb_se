#include<stdio.h>
#include<string.h>
int main()
{
    char fnm[20], lnm[20];
    printf("Enter your first last:");
    scanf("%s", &fnm);
    printf("Enter last name:");
    scanf("%s", &lnm);
    strcat(fnm, lnm);
    printf("\nYour full name is:%s", fnm);
    return 0;
}