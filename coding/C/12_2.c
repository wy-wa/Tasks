#include<stdio.h>
#include<stdbool.h>
#include<ctype.h>

#define SIZE 100

bool is_palindrome()
{
	char str[SIZE],ch;
	int count=0;
	
	while((ch=getchar())!='\n'&&count<SIZE)
		if(ch>='a'&&ch<='z'||ch>='A'&&ch<='Z')str[count++]=tolower(ch);
	
	for(int i=0;i<count/2;i++)
		if(str[i]!=str[count-i-1])return false;
	
	return true;
}

int main()
{
	return (int)is_palindrome();
}