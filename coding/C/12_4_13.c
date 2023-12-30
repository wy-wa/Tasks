//初始化二维数组，并打印

#include<stdio.h>
#define N 5

void init_identity_matrix(int *matrix,int size)//若为matrix[N][N],则二维数组名代表一维行的地址
{
	//方法多样，注意（int*）强制类型转换,
	for(int i=0;i<size*size;i++)
	{
		if(i%size==0)*matrix=1;
		else *matrix=0;
		
		matrix++;
	}
}

void print_matrix(int *matrix,int size)
{
	int i=0;
	while(i<size*size)
	{
		printf("%d ",*matrix++);
		if((i+1)%size==0) printf("\n");
		i++;
	}
}



int main()
{
		int matrix[N][N];
		
		init_identity_matrix((int*)matrix,N);
		print_matrix((int*)matrix,N);
		
		return 0;
}