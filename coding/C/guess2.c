//猜数游戏--局部变量 secret_num

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//带有形参
void Guess(int secret_num);

int main()
{
	srand((unsigned)time(NULL));
	int command,
		secret_num=rand()%100+1;
	
	do{
		Guess(secret_num);
		
		printf("Continues?");
	
		scanf(" %c",&command);
	}while(command=='y'||command=='Y');
		
	return 0;
}

void Guess(int secret_num)
{
	int your_num,guess_num;
	
	while(1)
	{
		printf("Enter your_num:");
		scanf("%d",&your_num);
		
		
		guess_num++;
		if(your_num==secret_num){
			printf("%d次猜中%d",guess_num,secret_num);
			return;
		}
		else if(your_num>secret_num)
			printf("Too high!");
		else printf("Too low!");
	}
}