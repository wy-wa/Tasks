//反向输出字符串

#include<stdio.h>
#define SIZE 100

int main()
{
	char str[SIZE],ch;
	int count=0;
	
	while((ch=getchar())!='\n'&&count<SIZE)
	{
		str[count++]=ch;
	}
	
	while(count>0)printf("%c",str[--count]);
	
	return 0;
}


//修改上述程序，用指针代替整数来跟踪数组中的当前位置
int main()
{
	char str[SIZE];
	char* p=str;
	int count=0;
	
	while(++count<SIZE&&((*p++)=getchar())!='\n');
	
	while(p!=str)putchar(*--p);
	
	return 0;
}