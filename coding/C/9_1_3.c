//计算gcd，Euclid's algorithm

#include<stdio.h>

int gcd(int x,int y)
{
	int temp;
	while(y)
	{
		temp=x;
		x=y;
		y=temp%x;
	}
	
	return x;
}

int main()
{
	int m,n;
	
	scanf("%d%d",&m,&n);
	
	int result=gcd(m,n);
	printf("%d",result);
	
	return 0;
}


//递归调用
// gcd(int x,int y)
// {
//	 if(n==0)
//		 return x;
//	 else
//		 return gcd(y,x%y);
// }