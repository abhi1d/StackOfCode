/** Created By 
    Abhishek Sharma
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int main()
{
	const char *source = "source.txt";
    const char  *MPass1 = "output1.txt";
    const char *output = "output.txt";
    const char *symbol1 = "sym1.txt";
    const char *delimQuot="'";
    const char *delimCol=",";
    char * value,*value1,*value2;
	
	FILE *fs = fopen(source,"r");
	//table from pass1 .it contain location counter,mnemonic symbol and address value in hexadecimal of corresponding mne symbol
	FILE *fm = fopen(MPass1,"r");
	FILE *fo = fopen(output,"w+");
	FILE *fsym1 = fopen(symbol1,"r");

	int LC=0,sa;
	int i=0,j=0;
	char mne[10],opnd[10],la[10],name[10],mneOfMot[10],opndOfMot[10],lcOfMot[10],s1[10],addOfMot[10],mne2[10],opnd2[10],la2[10],lc2[10],vofsym[10];
	char LCs[10];
  


	fscanf(fs,"%s\t%s\t%s",la,mne,opnd);
    while(strcmp(mne,"END")!=0)
     {
      if(strcmp(la,"#")==0)
      {
        fscanf(fm,"%s\t%s\t%s",lcOfMot,mneOfMot,addOfMot);
          while(!feof(fm))
            {
                if(strcmp(mneOfMot,mne)==0)
                  {
                  	//value2 will give the value of second operand in operand field
                      value1 = (char *)strtok(opnd,delimCol);
                      value2 = (char *)strtok(NULL,delimCol); 
                      
                      //searching in the symbol table  
                    	  if(value2!=NULL)
                      		{
                      			fscanf(fsym1,"%s\t%s\t%s",lc2,la2,vofsym);
                          		
                          		while(!feof(fsym1))
                                 {
                                 
                                		 if(strcmp(value2,la2)==0)
                                  			{
                                    			fprintf(fo,"%s\t%s\t%s%s%s\n",la,addOfMot,value1,delimCol,vofsym);
                                    			break;
                                   
                                 			 }
                                			else
                                 			{
												fscanf(fsym1,"%s\t%s\t%s",lc2,la2,vofsym);
                                 			 }
                        
                                 }
                               break;   
                           }
  
                       
                     }
                    else if(strcmp(mne,"USING")==0)
                     {
                     	fprintf(fo,"%s\t%s\t%s\n",la,mne,opnd);
                     	break;
                     }  
                  else
                   {
                      
                      fscanf(fm,"%s\t%s\t%s",lcOfMot,mneOfMot,addOfMot);
                   } 

            }
 
       }
         else
         {
              value=(char *)strtok(opnd,delimQuot);
              value =(char*)strtok(NULL,delimQuot);
             
             if(strcmp(mne,"DC")==0)
              {
                LC+=4;
                fprintf(fo,"%s\t%s\t%s%s%s%s\n",value,mne,opnd,delimQuot,value,delimQuot);
              }
             else if(strcmp(mne,"DS")==0)
              {
                LC+=4;
                fprintf(fo,"%s\t%s\t%s\n","*",mne,opnd);

              }
          else
            {
              fprintf(fo,"%s\t%s\t%s\n",la,mne,opnd);
            }
        } 

        fseek(fm,SEEK_SET,0);
        fseek(fsym1,SEEK_SET,0);
        fscanf(fs,"%s\t%s\t%s",la,mne,opnd);   
     }    
  

//it will print the END line. 
   fprintf(fo,"%s\t%s\t%s\n",la,mne,opnd);

	

 fclose(fs);
 fclose(fo);
 fclose(fm);
 fclose(fsym1);
 
}
