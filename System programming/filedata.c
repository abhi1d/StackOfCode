#include <stdio.h>
#include <string.h>
#include<stdlib.h>

#define len 1024
#define MAX 100000

int main(int argc, char *argv[])
{
    char line[len] = {0};
    //int i,j=0;
   // int mat[MAX][MAX];
     
    FILE *fp = fopen("data.csv", "w+");
    int sum;
    
    if (fp)
    {
        char *token = NULL;
        while( fgets(line, MAX, fp)) 
        {
            sum=0;
            //i=0;
            token = strtok(&line[0], ",");
            while (token)
            	{
                
                	sum = sum+atoi(token);
                       
                     	token = strtok(NULL, ",");
                }
            printf("%d\t",sum);  
        //j++;
      }

   /*for(int m=0;m<j;m++)
    {
        sum=0;
     	for(int n=0;n<i;n++)
        	{
          		 printf("%d\t",mat[m][n]);
         	 
          
         	}
    	 printf("\n");
     }
	*/


        fclose(fp);
    }
    return 0;
}
