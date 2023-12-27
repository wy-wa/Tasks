//8.1.1数列翻转

#include<stdio.h>
#define N 5

int main()
{
	int arr[N];
	for(int i=0;i<N;i++)
	{
		scanf("%d",&arr[i]);
	}
	
	for(int j=N-1;j>=0;j--)
		printf(" %d",arr[j]);
	
	return 0;
}