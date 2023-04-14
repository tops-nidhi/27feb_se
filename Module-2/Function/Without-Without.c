#include<stdio.h>
int sid;   
void get()
{
    printf("Enter the student id:");
    scanf("%d", &sid);
}
void show()
{
    printf("\nStudent's id is:%d", sid);
}
int main()
{
    get();
    show();    
    return 0;
}