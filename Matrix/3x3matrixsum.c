#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[5][5],b[5][5],sum[5][5],i,j,k;
    printf("Enter the value in matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("a[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the value in matrix B:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("b[%d][%d]=",i,j);
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sum[i][j]= a[i][j]+b[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",sum[i][j]);
        }
        printf("\n");
    }
    getch();
}
