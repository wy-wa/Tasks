//8.3边长数组

#include<stdio.h>

int main()
{
	int n;
	scanf("%d",&n);
	//注意：将n定义初始化在数组前面
	int arr[n];
	
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	for(int j=n-1;j>=0;j--)
		printf("%d ",arr[j]);
	
	return 0;
}