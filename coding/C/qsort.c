//快速排序————递归算法

#include<stdio.h>
#define N 5
//分割算法
int split(int a[],int low,int high)
{
	//始终将分割的部分数组第一个作为分隔
	int part_element=a[low];
	
	//将第一个元素拿住来，从高位依次与他比较
	while(1)
	{
		while(a[high]>part_element&&high>low)
			high--;
		if(low>=high)break;
		a[low++]=a[high];
		
		//找到后用高位的数将其填上，然后用低位依次与哪个高位的数比
		while(a[low]<part_element&&low<high)
			low++;
		if(low>=high)break;
		a[high--]=a[low];
	}
	
	//直到找到分割空位 high=low 时
	a[high]=part_element;
	return high;
}

void quick_sort(int a[],int low,int high)
{
	//注意这句写在调用split之前
	if(low>high)return;
	//递归调用排序
	int middle=split(a,low,high);
	quick_sort(a,low,middle-1);
	quick_sort(a,middle+1,high);
}


int main()
{
	int a[N];
	
	for(int j=0;j<N;j++)
		scanf("%d",&a[j]);
	
	quick_sort(a,0,N-1);
	
	for(int i=0;i<N;i++)
		printf("%d ",a[i]);
	
	return 0;
}