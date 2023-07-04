#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    char s[10],temp[10];
    printf("Enter a string:");
    gets(s);//Takes string input//
    strlwr(s);//Converts the input from user to lowercase//
    strcpy(temp,s);//Copies the string from destination s to temp//
    strrev(s);//Reverse the s string//
    if(strcmp(temp,s)==0)//Compares the two strings if they are equal or not.//
    {
        printf("The given string is palindrome.");
    }
    else
    {
        printf("The given string is not palindrome.");
    }

    getch();
}
