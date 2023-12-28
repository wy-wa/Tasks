//黑白棋盘比较

#include<stdio.h>

int evaluate_position(char board[8][8])
{
	int white_score=0,
		black_score=0;
		
	for(int i=0;i<8;i++)
		for(int j=0;j<8;j++)
		{
			switch(board[i][j]){
				case 'Q': white_score += 9; break;
                case 'R': white_score += 5; break;
                case 'B': white_score += 3; break;
                case 'N': white_score += 3; break;
                case 'P': white_score += 1; break;
                case 'q': black_score += 9; break;
                case 'r': black_score += 5; break;
                case 'b': black_score += 3; break;
                case 'n': black_score += 3; break;
                case 'p': black_score += 1; break;
			}
		}
		
	return white_score-black_score;	
}

int main()
{
	char board[8][8]={
		{'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
        {'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
        {'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
        {'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'}
	};
	
	int score=evaluate_position(board);
	
	if(score>0)printf("1");
	else printf("0");
		
	return 0;
}