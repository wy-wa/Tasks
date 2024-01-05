#include<iostream>
#include <windows.h>
int main()
{
	SetConsoleOutputCP(65001);
	
	double base,result=1.0;
	int exponent;
	
	std::cout<<"请输入底数：";
	std::cin>>base;
	
	std::cout<<"输入指数：";
	std::cin>>exponent;
	
	if(exponent < 0) {
		std::cout<<"错误：指数不能为负数。"<<std::endl;
		return 1;
	}
	
	for(int i=0;i!=exponent;i++)
		result*=base;
	
	std::cout<<"结果是："<<result<<std::endl;
	
	return 0;
}
