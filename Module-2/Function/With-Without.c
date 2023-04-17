#include<stdio.h>
int no;
int getdata()
{
    printf("Enter the value of no:");
    scanf("%d", &no);
    return 0;
}
int show()
{
    return no;
    //return keyword is assign the value to the function
}
int main()
{
    getdata();
    // Function has value of no 
    // If you want to print no value then you need to show() into printf();
    printf("%d",show());
    return 0;
}
