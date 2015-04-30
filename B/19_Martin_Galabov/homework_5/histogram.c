#include<stdio.h>
	int main()
	{
		int array[20];
		int count,c,length,i;
		scanf("%d",&length);
		for (i=1; i<=length; i++)
		{
			scanf("%d",&array[i]);
		}
		for(count=0; count<=length; count++)
		{
			printf("%d",count);
			for(c=1; c<=length; c++)
			{
				if (array[c]==count)
				{
					printf("*");
				}
			}
			printf("\n");
		}
		return 0;
	}