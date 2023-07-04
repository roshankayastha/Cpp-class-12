 #include <stdio.h>
 #define MAXSIZE 10 
   int main()
   {
    
    int array[MAXSIZE];
    int i,j,n[10],temp;
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
		for(j=i+1;j<10;j++)
		{
			if (array[i]<array[j])
			{
				temp=array[i];
				array[i]=array[j];
				array[j]=temp;
				
			}
		}
	}
	printf("The sorted array in descending order is:\n");
	for(i=0;i<10;i++)
	{
		printf("%d\n",array[i]);
	}
return 0;
    }
    
