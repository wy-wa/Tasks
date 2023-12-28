#include<stdio.h>


int check(int x,int y,int n){
	return x>=0&&x<=n-1&&y>=0&&y<=n-1?1:0;
}

int main()
{
	int x,y,n;
	
	scanf("%d %d %d",&x,&y,&n);
	
	int result=check(x,y,n);
	printf("%d",result);
	
	return 0;
}