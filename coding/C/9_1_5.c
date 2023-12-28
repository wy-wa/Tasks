//判断位数

#include<stdio.h>

void num_digits(int n){
	int digits=0;
	
	while(n)
	{
		digits++;
		n/=10;
	}
	
	printf("%d",digits);
}

int main()
{
	int n;
	scanf("%d",&n);
	
	num_digits(n);
	
	return 0;
}