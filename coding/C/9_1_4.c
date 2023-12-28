//计算一年的第几天

#include<stdio.h>
#include<stdbool.h>

//判断闰年
bool is_leap(int year){
	return (year%4==0&&year%100!=0||year%400==0);
}

void DAY(int year,int month,int day,int a[]){
	int Days=0;
	
	for(int i=0;i<month-1;i++)
	{
		Days+=a[i];
	}
	
	Days+=day;
	//闰年加一天
	if(is_leap(year)&&month>2)Days++;
	
	printf("%d",Days);
}

int main()
{
	int Months[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int year,month,day,Days;
	scanf("%d%d%d",&year,&month,&day);
	
	DAY(year,month,day,Months);
	
	return 0;
}