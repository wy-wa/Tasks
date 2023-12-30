//13.5.4提醒日程

#include<stdio.h>
#include<string.h>

#define DAY 50
#define MSG 60

int read_str(char *str,int n)
{
	int i=0;
	while((*str++=getchar())!='\n')
		if(++i==n)break;
	str[i+1]='\0';
	return i+1;
}

int main()
{
	char reminders[DAY][MSG],
		 day_str[3],
		 msg_str[MSG+1];
	
	int num_read=0,day,i,j;
	while(1)
	{
		if(num_read==DAY)break;
		
		printf("Enter day:");
		scanf("%2d",&day);
		
		if(day==0)break;
		
		sprintf(day_str,"%2d",day);
		
		read_str(msg_str,MSG);
		
		for(i=0;i<num_read;i++)
			if(strcmp(day_str,reminders[i])<0)break;
		
		for(j=num_read;j>i;j--)
			strcpy(reminders[j],reminders[j-1]);
		
		strcpy(reminders[i],day_str);
		strcat(reminders[i],msg_str);
		
		num_read++;
	}
	
	for(i=0;i<num_read;i++)
		printf("%s\n",reminders[i]);
	
	return 0;
}

