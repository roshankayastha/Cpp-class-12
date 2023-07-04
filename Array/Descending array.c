#include<stdio.h>
#include<conio.h>
void main()
{
  int number[10],i,j,temp;
  printf("Enter the numbers:\n");
  for(i=0;i<10;i++)
  {
      scanf("%d",&number[i]);
  }
  for(i=0;i<10;i++)
  {
      for(j=i+1;j<10;j++)
      {
          if(number[i]<number[j])
          {
              temp=number[i];
              number[i]=number[j];
              number[j]=temp;
          }
      }
  }
  printf("The numbers in ascending order is:\n");
    for(i=0;i<10;i++)
  {
      printf("number[%d]=%d\n",i,number[i]);
  }

    getch();
}
