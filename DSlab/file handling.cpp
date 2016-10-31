#include <stdio.h>
#include <conio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	char s;
	fp=fopen("text.txt","r");
	if(fp==NULL)
	{
		printf("\nCAN NOT OPEN FILE");
		getch();
		return 0;
	}
	do
{
		s=getc(fp);
		printf("%c",s);
	}
	while(s!=EOF);
	fclose(fp);
	getch();
}
