//返回一个数的指定位上的数字

#include<stdio.h>
#include<math.h>

int digits(int n,int k)
{
	int len=floor(log10(n))+1;              //floor向下取整，log10()可得小数
	
	if(k>len)return 0;
	else return (n/(int)pow(10,k-1))%10;    //注意转换为int，否则%出错
}

int main()
{
	int n,k;
	scanf("%d%d",&n,&k);
	
	int digit=digits(n,k);
	printf("%d",digit);
	
	return 0;
}