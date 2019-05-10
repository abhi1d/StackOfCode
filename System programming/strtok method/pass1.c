#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 1000
int flag=1;
 const char *delimCol="\t";
 const char *delimLine="\n";
 const char *sourceFile="source.txt";
 const char *motFile="mot.txt";
 const char *potFile="pot.txt";
 const char *output="out.txt";
 FILE *fm,*fs,*fp,*fo; 
 
 
   
 int LC=0;

int searchInMot(char *mchar)
{
	fm = fopen(motFile,"r");
  

	int found = 0;
   
   if(fm==NULL)
   {
   	 printf("can't open file");
   	 fclose(fm);
   	 exit(1);
   }
   
  char mot[MAX];
  char *token_mot_column;

  while(fgets(mot,MAX,fm))
  {
    token_mot_column = (char*)strtok(mot,delimCol);

    if ( strcmp(token_mot_column, mchar) == 0) {
            found = 1;
            break;
        }

  }

  if(found)
    {
    	fprintf(fo,"%s\t",token_mot_column);
        token_mot_column=(char *)strtok(NULL,delimCol);
        LC+=atof(token_mot_column);	
        fprintf(fo,"%d\n",LC);

     }

  fclose(fm);
  return found;     


}

int searchInPot(char *pchar)
{
 fp = fopen(potFile,"r");

fclose(fp);
return 0;
}

int main()
{

 fo = fopen(output,"w");

 fs = fopen(sourceFile,"r");


  char line[MAX];
  char *token_for_column;
  char *token_for_line;
  
  if(flag){
  	fprintf(fo,"%s\t%s","symbol","LC");
  	flag=0;
  }

  while(fgets(line,MAX,fs)){

  	token_for_column = (char *)strtok(line,delimCol);

  	 while( token_for_column != NULL)
  	 {
  	 	if(strcmp(token_for_column,"#")!=0)
  	 	{
  	 		if(searchInPot(token_for_column) || searchInMot(token_for_column) || !strcmp(token_for_column,"START") || !strcmp(token_for_column,"END") )
  	 		{
  	 			break;
  	 		}
  	 	}
  	 	else{
  

  	    }

  	   token_for_column = (char *)strtok(NULL,delimCol); 
  	}


  }
  fclose(fs);
  fclose(fo);

}
 