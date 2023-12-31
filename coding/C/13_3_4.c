// 按照下述要求分别修改read_line 函数。

//　(a) 在开始存储输入字符前跳过空白字符。

int read_line_a(char *str,int n)
{
	int i=0,ch;
	
	while(isspace(ch=getchar()));
	
	if(i<n)str[i++]=ch;
	
	while((ch=getchar())!='\n'&&ch!=EOF)
		if(i<n)
			str[i++]=ch;
		
	str[i]='\0';
	return i;
}

//　(b) 在遇到第一个空白字符时停止读入。提示 ：调用isspace 函数（➤23.5节）来检查字符是否为空白字符。

int read_line_b(char *str,int n)
{
	int i=0,ch;
	
	while(!isspace((ch=getchar()))&&ch!=EOF)
		if(i<n)str[i++]=ch;
	
	str[i]='\0';
	return 0; 
}

//　(c) 在遇到第一个换行符时停止读入，然后把换行符存储到字符串中。

int read_line(char* str,int n)
{
	int ch,i=0;
	
	while((ch=getchar())!='\n'&&ch!=EOF)
		if(i<n)str[i++]=ch;
	
	str[i]='\n';
	str[++i]='\0';
	
	return i;
}


//　(d) 把没有空间存储的字符留下以备后用。