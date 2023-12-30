#include<stdio.h>
#include<stdbool.h>

//编写一条语句，使用search 函数（见练习题7）在整个temperatures 数组中寻找值32。
bool search(int* temperatures,int n)
{
	int i=0;
	while(i<7*24)
	{
		if(*(temperatures+i)==n)return true;
		i++;
	}
	
	return false;
}

//编写一个循环来显示（练习题14中的）temperatures 数组中第i行存储的所有温度读数。利用指针来访问该行中的每个元素。
void print_day(int temperatures[][24],int m)
{
	int i=0;
	while(i<24)
	{
		printf("%d ",*(temperatures[m]+i));
		i++;
	}
	printf("\n");
}

//编写一个循环来显示（练习题14中的）temperatures 数组一星期中每一天的最高温度。循环体应该调用find_largest 函数，且一次传递数组的一行
void find_largest(int temperatures[][24],int x)//注意指针形式的参数不行int* temperatures
{
	int max=temperatures[x][0];                //因为要这样访问
	//不能直接使用 temperatures[x][0] 这样的语法来访问一个通过指针传递的二维数组。你需要先将 temperatures 转换为一个二维数组的指针，然后再使用这个指针来访问数组的元素
	for(int i=1;i<24;i++)
		if(max<temperatures[x][i])max=temperatures[x][i];

	printf("%d ",max);
}


int main()
{
	int temperatures[7][24]={32};
	
	if(search((int *)temperatures,32))printf("yes!\n");//注意强制类型转换（int*），对应int* temperatures形参
	else printf("no!\n");
	
	for(int i=0;i<7;i++)
	{
		print_day(temperatures,i);
	}
	printf("\n");
	
	for(int i=0;i<7;i++)
	{
		find_largest(temperatures,i);
	}

		return 0;
}