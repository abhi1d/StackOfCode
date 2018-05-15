#include<stdio.h>
int main()
{
	FILE *fl;
	char ch;
	fl=fopen("input.txt","r");
	if(fl==NULL)
	{
		puts("cannot open file");
		return 0;
	}
	while(1)
	{
		ch=fgetc(fl);
		if(ch==EOF)
		break;
		else
		printf("%c",ch);
	}
}
