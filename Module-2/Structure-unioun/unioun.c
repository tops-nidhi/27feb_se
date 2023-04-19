#include<stdio.h>
union Structure
{
    // Variable is known as data member which was define inside the structure body
    // Can't initialize the data member inside the structure body
    int id;
    char nm[20];
}st;
int main()
{
    // union Structure st;
    printf("Enter the value of id:");
    scanf("%d", &st.id);
    printf("Enter the your name:");
    scanf("%s", &st.nm);

    printf("\n%s your id is:%d", st.nm, st.id);
}