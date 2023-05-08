#include<stdio.h>
#define pi 3.14
int main()
{
    int r;
    float area;
    printf("Enter the radius of circle : ");
    scanf("%d",&r);
    area = pi * (float)r * (float)r;
    printf("\nArea of the circle is:%f", area);
}