//6. 编写名为censor 的函数，把字符串中出现的每一处foo 替换为xxx 。例如，字符串"food fool" 会变为"xxxd xxxl" 。在不失清晰性的前提下程序越短越好。

#include<stdio.h>

void censor(char* str)
{
	char *p=str;
	
	while((p=strstr(p,"ool"))!=NULL)
	{
		strncpy(p,"xxx",3);
		p+=3;
	}
}

int main()
{
	char str[];
	gets(str);
	
	censor(str);
	
	return 0;
}