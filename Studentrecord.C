#include<stdio.h>
#include<conio.h>
struct student
{
 char fname[20],lname[20];
 int roll;
}std[100],temp;
void main()
{
int i,j,n;
clrscr();
printf("Enter the number of students:");
scanf("%d",&n);
printf("\nEnter the information of the students");
printf("\n-------------------------------------------------------------");
for(i=0;i<n;i++)
{
printf("\nEnter the roll number of the student:");
scanf("%d",&std[i].roll);
printf("\nEnter the first name of the student:");
scanf("%s",std[i].fname);
printf("\nEnter the last name of the student:");
scanf("%s",std[i].lname);
printf("\n---------------------------------------------------------------");
}

for(i=0;i<n;i++)
{
 for(j=0;j<n-1;j++)
 {
 if(std[j].roll>std[j+1].roll)
  {
   temp=std[j];
   std[j]=std[j+1];
   std[j+1]=temp;
  }

 }

}
printf("\nThe name of the students in descending order according to the roll number is:\n");
printf("\nRoll number\t\tFirst name\t\tLast name");
printf("\n------------------------------------------------------------------------------");
for(i=0;i<n;++i)
{
printf("\n%d.\t\t\t%s\t\t\t\%s",std[i].roll,std[i].fname,std[i].lname);
}


getch();
}