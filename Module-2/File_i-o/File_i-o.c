#include<stdio.h>
int main()
{
/*
    r - Read Mode
    w - Write Mode
    a - Append Mode 
*/
    FILE *fptr;
    char str1[20], str2[20];
    // Take the input from the user
    printf("Enter your string:");
    scanf("%s", &str1);
    // Give the path to the file
    // Fopen() open the file or if file isn't available then crete and open
    fptr = fopen("D:/nidhi batch/software engineering/27feb_se/module-2/File_i-o/hello.txt", "a");

    fprintf(fptr, "%s", str1);// Use to print int the file
    fclose(fptr); //Use to close the file 

    fptr = fopen("D:/nidhi batch/software engineering/27feb_se/module-2/File_i-o/hello.txt", "r");

    //To read the file
    fscanf(fptr, "%s", &str2);
    printf("%s", str2);

    fclose(fptr);
    return 0;
}

/*
no = 5;
5 * 1 = 5;
str2!=EOF
---------------------
putc()    getc()
puts()    gets()
putw()    putw()
*/