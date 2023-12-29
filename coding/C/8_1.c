//输出一个数的重复数字

#include<stdio.h>
#include<stdbool.h>

int main()
{
	long n;
	scanf("%ld",&n);
	
	bool repdigits[10]={false};
	int digit;
	
	while(n)
	{
		digit=n%10;
		repdigits[digit]=true;
		n/=10;
	}
	
	for(int i=0;i<10;i++)
		if(repdigits[i])printf("%d ",i);
	
	return 0;
}