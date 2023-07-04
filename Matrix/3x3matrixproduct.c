#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[5][5],b[5][5],pro[5][5],sum=0,i,j,k;
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
            for(k=0;k<3;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            product[i][j]=sum;
            sum=0;
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d\t",product[i][j]);
        }
        printf("\n");
    }
    getch();
}
