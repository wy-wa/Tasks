//计算利息


#include<stdio.h>

int main()
{
	int rate,year=1,years;
	double value[5];
	
	scanf("%d%d",&rate,&years);
	
	printf("years      ");
	for(int i=0;i<=4;i++)
	{
		printf("%6d%%",rate+i);
		value[i]=100;
	}
	printf("\n");
	
	for(year=1;year<=years;year++)
	{
		printf("  %d",year);
		
		for(int i=0;i<5;i++)
		{
			value[i]+=value[i]*(rate+i)/100.0;
			printf("%7.2f",value[i]);
		}
		printf("\n");
	}
	
	return 0;
}
