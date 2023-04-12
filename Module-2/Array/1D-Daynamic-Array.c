#include<stdio.h>
int main()
{
    // To take the value from the user
    // int array[50]; //Define for the take user's id
    int id[10];
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("\nEnter the your id[%d]:", i);
        scanf("%d", &id[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("\nYour id is:%d", id[i]);
    }
    
    
    return 0; 
}