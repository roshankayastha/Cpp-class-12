#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int a[3][3],b[3][3],pro[3][3],sum=0,i,j,k;
    printf("Enter the elements in matrix A:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n");
            printf("A[%d][%d]=",i,j);
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the elements in matrix B:");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n");
            printf("B[%d][%d]=",i,j);
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
                pro[i][j]=sum;
                sum=0;
            }

        }
    }
        printf("Enter the elements in matrix A:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {

printf("%d\t",pro[i][j]);
        }printf("\n");
    }
}
