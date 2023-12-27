//8.1.3监测数据中重复出现的数

#include <stdio.h>
#include<stdbool.h>

int main()
{
	int arr[10]={false};
	int n,digit=0;
	
	scanf("%d",&n);
	
	while(n>0)
	{	
		digit=n%10;
		
		if(arr[digit])
			break;
		
		arr[digit]=true;
		n/=10;
		
	}
	
	if(n>0)
		printf("yes!");
	else
		printf("No!");
	
	return 0;
}	
		
	