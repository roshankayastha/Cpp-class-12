#include<stdio.h>
#include<conio.h>
#include<string.h>
struct employee
{
    char fname[20],lname[20];
    int sal;
}emp[20],temp;
void main ()
{
    int i;
    printf("Enter the first name last name and salary of employee:");
    for(i=0;i<5;i++)
    {
        printf("\n");
        printf("%d.First Name:",i+1);
        scanf("%s",&emp[i].fname);
        printf("%d.Last Name:",i+1);
        scanf("%s",&emp[i].lname);
        printf("%d.Salary:",i+1);
        scanf("%d",&emp[i].sal);
    }
    for(i=0;i<5;i++)
    {
        printf("\n%d.First Name:%s\tLast Name:%s\tSalary:%d",i+1,emp[i].fname,emp[i].lname,emp[i].sal);
    }
    getch();
}
