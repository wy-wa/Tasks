//外部指针变量实现栈

#include<stdbool.h>
#define STACK_SIZE 100

int *top_ptr;
int contents[STACK_SIZE];

void make_empty(void)
{	
	top_ptr=contents;
}

bool is_empty()
{
	return top_ptr==contents;
}

bool is_full()
{
	return top_ptr==&contents[STACK_SIZE];
}