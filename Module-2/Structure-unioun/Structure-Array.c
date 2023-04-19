#include<stdio.h>
struct Structure
{
    // Variable is known as data member which was define inside the structure body
    // Can't initialize the data member inside the structure body
    int id;
    char nm[20];
};
int main()
{
    struct Structure st[20];
    int i;
    for(i = 0; i < 5; i++)
    {
        printf("Enter the value of id:");
        scanf("%d", &st[i].id);
        printf("Enter the your name:");
        scanf("%s", &st[i].nm);
    }
    for(i = 0; i < 5; i++)
    {
        printf("\n%s your id is:%d", st[i].nm, st[i].id);
    }
}