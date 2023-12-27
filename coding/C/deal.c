//8.2.2输出随机生成的扑克牌

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include<stdbool.h>
#define SUIT 4
#define RANKS 13


int main()
{
	//将所有牌标记false
	bool card[SUIT][RANKS]={false};
	
	const char suit_card[SUIT]={'z','x','c','v'};
	const char rank_card[RANKS]={'2','3','4','5','6','7','8','9','t','j','q','k','a'};
	//手牌数量
	int num_in_hand,suit,rank;
	scanf("%d",&num_in_hand);
		
	srand((unsigned)time(NULL));	
	while(num_in_hand)
	{
		//随机生成一张手牌
		suit=rand()%SUIT;
		rank=rand()%RANKS;
		//若生成的重复，则再来一遍
		if(!card[suit][rank])
		{
			//没重复则继续
			card[suit][rank]=true;
			printf(" %c%c",suit_card[suit],rank_card[rank]);
			num_in_hand--;
		}
	}

	return 0;	
}