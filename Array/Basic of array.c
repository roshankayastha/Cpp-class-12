#include<stdio.h>
#include<conio.h>
void main()
{
int a[100],i; //a is array and i is for loop //
printf("Enter the numbers:\n");
for(i=0;i<20;i++)
//loop is must while using an array//
//Here the initial value of i is 0 and it is said to run from 0 to 19 = 20, i++ means it is asked to keep adding the numbers.//
{
    scanf("%d",&a[i]);
}
printf("Output:\n");
for(i=0;i<20;i++)
{

    printf("%d\n",a[i]);
}
getch();
}
