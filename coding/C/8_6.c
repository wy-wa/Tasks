//B1FF过滤器

#include<stdio.h>
#include <ctype.h>

int main()
{
	char ch;
	//循环输入一个字符
	while((ch=getchar())!='\n')
	{
		ch=toupper(ch);
		switch(ch)
		{
			case'A':           ch='4';break;
			case'B':           ch='8';break;
			case'E':           ch='3';break;
			case'I':           ch='1';break;
			case'O':           ch='0';break;
			case'S':           ch='5';break;
		}
		
		putchar(ch);
	}
	
	printf("!!!!!!!!\n");
	
	return 0;
}