 #include <stdio.h>
 #define MAXSIZE 10 
   int main()
   {
    
    int array[MAXSIZE];
    int i,j,temp;
    printf("Enter any 10 numbers:\n");
    for(i=0;i<10;i++)
    {
    	scanf("%d",&array[i]);
	}
	printf("Entered 10 numbers are:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
	for(i=0;i<10;i++)
	{
		for(j=0;j<(10-i-1);j++)
		{
			if (array[j]>array[j+1])
			{
				temp=array[j];
				array[j]=array[j+1];
				array[j+1]=temp;
				
			}
		}
	}
	printf("The sorted array is:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
return 0;
    }
    
