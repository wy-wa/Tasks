//打印一个数各个数字出现次数

#include<stdio.h>

int main()
{
	long n;
	scanf("%ld",&n);
	
	int num_digit[10]={0};
	//记录每位数出现次数
	int digit=0;
	while(n)
	{
		digit=n%10;
		num_digit[digit]++;
		
		n/=10;
	}
	
	printf("digit:\t\t");
	for(int i=0;i<10;i++)printf("%d\t",i);
	printf("\n");
	
	printf("num_digit:\t");
	for(int i=0;i<10;i++)printf("%d\t",num_digit[i]);
	
	return 0;
}