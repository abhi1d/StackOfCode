/** Created By 
    Abhishek Sharma
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
	const char *source = "source.txt";
    const char  *MOT = "MOT.txt";
    const char *output = "output1.txt";
    const char *symbol1 = "sym1.txt";
    const char *delimQuot="'";
    const char *delimCol=",";
    char * value;
	
	FILE *fs = fopen(source,"r");
	FILE *fm = fopen(MOT,"r");
	FILE *fo = fopen(output,"w+");
	FILE *fsym1 = fopen(symbol1,"w+");

	int LC=0,sa;
	int i=0,j=0;
	char mne[10],opnd[10],la[10],name[10],mneOfMot[10],opndOfMot[10],s1[10],addOfMot[10];
	char LCs[10];
    int flag=1;

	fscanf(fs,"%s\t%s\t%s",la,mne,opnd);
	

	if(strcmp(mne,"START")==0)
     {
      sa=atoi(opnd);
      strcpy(name,la);
      LC=sa;
     }
     
     fscanf(fs,"%s\t%s\t%s",la,mne,opnd);
     
     while(strcmp(mne,"END")!=0)
     {
      if(strcmp(la,"#")==0)
   		{
     		fscanf(fm,"%s\t%s\t%s",mneOfMot,opndOfMot,addOfMot);
     			while(!feof(fm))
     				{
       					if(strcmp(mneOfMot,mne)==0)
       						{
       							/*value=(char *)strtok(opnd,delimCol);
       							value=(char*)srtok(NULL,delimCol);*/
    							LC+=atoi(opndOfMot);
    							fprintf(fo,"%d\t%s\t%s\n",LC,mneOfMot,addOfMot);
    							break;
       						}
      					 else
     						fscanf(fm,"%s\t%s\t%s",mneOfMot,opndOfMot,addOfMot);
     				}
 
         }


         else
        {
           
           value=(char *)strtok(opnd,delimQuot);
           value =(char*)strtok(NULL,delimQuot);
    	 if(strcmp(mne,"DC")==0)
        	{

        		LC+=4;
       			 fprintf(fsym1,"%d\t%s\t%s\n",LC,la,value);

       		}
     	else if(strcmp(mne,"DS")==0)
     		{
      			LC+=4;
      			fprintf(fsym1,"%d\t%s\t%s\n",LC,la,"*");
     		}
     	}	

        fseek(fm,SEEK_SET,0);
       	fscanf(fs,"%s\t%s\t%s",la,mne,opnd);   
     }    

 fclose(fs);
 fclose(fo);
 fclose(fm);
 fclose(fsym1);
 
}
