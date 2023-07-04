#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,rem,rev=0;
    printf("Enter any number:");
    scanf("%d",&a);
    b=a;
    while(a!=0)
    {
        rem=a%10;
        rev=rev*10+rem;
        a/=10;
    }
    if(rev==b)
    {
        printf("The number is palindrome");
    }
    else{
        printf("The number is not palindrome.");
    }
 getch();
}


