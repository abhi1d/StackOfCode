#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 1024

int main() {

    const char* delimiter_character_sum = ",";
    const char* delimiter_character_line = "\n";
    const char* fileread_mot = "mot.csv";
    const char* fileread_pot = "pot.csv";
    const char* fileread_source = "john.csv";
     
    const char* filewrite = "data.csv";

    FILE *fr_mot = fopen( fileread_mot, "r" );
    FILE *fr_pot = fopen( fileread_pot, "r" );
    FILE *fr_source = fopen( fileread_source, "r" );
    FILE *fw = fopen( filewrite, "w" );

    char line_source[SIZE];
    char line_pot[SIZE];
    char line_mot[SIZE];

 
    int lc=0;
    char *token_comp;
    char *token_mot;
    char *token_pot;
    int flag = 0;

    if (fr_mot == NULL) {
        puts("Cannot open file.");
        exit(1);
    }
    if (fr_pot == NULL) {
        puts("Cannot open file.");
        exit(1);
    }
     if (fr_source == NULL) {
        puts("Cannot open file.");
        exit(1);
    }
    if (fw == NULL) {
        puts("Cannot open file.");
        fclose(fr_mot);
	fclose(fr_pot);
	fclose(fr_source);
        exit(1);
    }

    while (fgets(line_source, SIZE, fr_source)) {

        token_comp = (char *)strtok(line_source, delimiter_character_sum);
	printf("%s\tloop1\n",token_comp);

	token_mot = (char *)strtok(line_mot, delimiter_character_sum);
        while(fgets(line_mot, SIZE, fr_mot))
	{
	printf("%s\tloop2\n",token_mot);
         if(token_comp == token_mot)
	 {
	   fprintf(fw, "%s%s%d\n", token_comp, ",",lc);
	   printf("%s\n",token_comp);
	   lc=lc+4;
           printf("%d\n",lc);	
	 }	
	 token_mot = (char *)strtok(NULL, delimiter_character_sum);
	}  

	 token_comp = (char *)strtok(NULL, delimiter_character_sum);
	
        
    }

    fclose(fr_mot);
    fclose(fr_pot);
    fclose(fr_source);
    fclose(fw);
	
}
