#include<stdio.h>
#include<conio.h>
#include<string.h>
struct student{
    char name[20];
    int roll;
}std[20],temp;

void main()
{
    int i,j;
    printf("Enter the name and roll number of student:");
    for(i=0;i<5;i++)
    {
        printf("\n");
        printf("Name:");
        scanf("%s",&std[i].name);
        printf("Roll.No:");
        scanf("%d",&std[i].roll);
    }

    for(i=0;i<5;i++){
        for(j=i+1;j<5;j++){
                if(strcmp(std[i].name,std[j].name)>0){
                    temp=std[i];
                    std[i]=std[j];
                    std[j]=temp;
                }
        }
    }

    for(i=0;i<5;i++)
    {
        printf("\nName:%s\tRoll.No:%d",std[i].name,std[i].roll);
    }
    getch();
}
