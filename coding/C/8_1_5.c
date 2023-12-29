//for循环输出斐波那契数列

#include<stdio.h>

void fib(int n,int arr[n])
{
	arr[0]=0;
	arr[1]=1;
	//注意是循环方法
	for(int i=2;i<n;i++)
		arr[i]=arr[i-1]+arr[i-2];
}

int main()
{
	int n;
	scanf("%d",&n);
	
	int fib_num[n];
	fib(n,fib_num);
	
	for(int i=0;i<n;i++)
		printf("%d ",fib_num[i]);
	
	return 0;
}