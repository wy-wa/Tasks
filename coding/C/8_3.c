//重复录入并判断是否重复数字

#include<stdio.h>
#include<stdbool.h>

int main()
{
	bool digit_seen[10]={false};
	long n;
	printf("Enter num:");
	scanf("%ld",&n);
	
	int digit;
	//循环输入输入判断数字
	while(n>0)
	{
		while(n)
		{
			digit=n%10;
			
			if(digit_seen[digit])break;
			
			digit_seen[digit]=true;
			
			n/=10;
		}
		
		if(n) printf("Yes!\n");
		else  printf("No\n");
	
		for(int i=0;i<10;i++)
			digit_seen[i]=false;
	
		printf("Enter num:");
		scanf("%ld",&n);
	}
	
	return 0;
}
