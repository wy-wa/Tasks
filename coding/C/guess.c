//猜数游戏--全局变量 secret_num

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#define MAX 100

void Guess(void);
int secret_num;

int main()
{
	//注意随机种子一定要在main内
	srand((unsigned)time(NULL));
	
	int command;
	do{
		secret_num=rand()%100+1;
		Guess();
		printf("Continus?\n");
		scanf(" %c",&command);
	}while(command=='y'||command=='Y');

	return 0;
}

void Guess()
{
	int your_num,num_guess=0;
	while(1)
	{
		num_guess++;
		printf("Enter your_num:");
		scanf("%d",&your_num);
		//判断
		if(your_num==secret_num)
		{
			printf("%d次,猜中%d",num_guess,secret_num);
			return;
		}
		else if(your_num>secret_num)printf("Too high!");
		else printf("Too low!");
	}
}