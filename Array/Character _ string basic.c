#include<stdio.h>
#include<conio.h>
void main()
{
    char a[20];
    printf("Enter any name:");
    gets(a); //Can be used instead of scanf to get string.//
    printf("The name is: %s",a);
    getch();
}
