#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;
	fp=fopen(".txt","r");
	char buff[50];
	fscanf(fp,"%s",buff);
	printf("1 : %s\n",buff);
	
	fgets(buff,255,(FILE*)fp);
	printf("2 :  %s\n",buff);
	fgets(buff,255,(FILE*)fp);
	printf("3 :  %s\n",buff);
	fclose(fp);
}
