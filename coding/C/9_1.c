//递归排序

#include<stdio.h>
//注意n放在a[]之前
void selection_sort(int n,int a[])
{	
	//n等于1时，递归结束，只有一个元素则认为其已经有序
	if(n<=1)return;
	//默认将最后一个元素置为最大
	for(int i=n-2;i>=0;i--)
	{
		if(a[n-1]<a[i])
		{
			int temp =a[n-1];
			a[n-1]=a[i];
			a[i]=temp;
		}
	}
	
	selection_sort(n-1,a);
}

int main()
{
	int n;
	scanf("%d",&n);
	
	int arr[n];
	for(int i=0;i<n;i++)
		scanf("%d",&arr[i]);
	
	selection_sort(n,arr);
	
	for(int i=0;i<n;i++)
		printf("%d ",arr[i]);
	
	return 0;
}