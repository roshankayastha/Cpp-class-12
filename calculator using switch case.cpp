#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,sum,sub,mul,div,choice;
	printf("CALCULATOR\n");
	printf("1--Addition\n2--Subtraction\n3--Multiplication\n4--Division\n Enter choice no:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:
			printf("Enter the value of a and b:");
			scanf("%d%d",a,b);
			sum=a+b;
			printf("\nThe sum of a and b is %d",sum);
			break;
    	case 2:
			printf("Enter the value of a and b:");
			scanf("%d%d",a,b);
			sub=a-b;
			printf("\nThe difference between a and b is %d",sub);
			break;
		case 3:
			printf("Enter the value of a and b:");
			scanf("%d%d",a,b);
			mul=a*b;
			printf("\nThe product of a and b is %d",mul);
			break;
		case 4:
			printf("Enter the value of a and b:");
			scanf("%d%d",a,b);
			div=a/b;
			printf("\nThe division of a and b is %d",div);
			break;
		default:
			printf("\nPlease select a valid choice");
	}
	return 0;
}
