#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER 1024

int main() {

    const char* delimiter_character_sum = ",";
    const char* delimiter_character_line = "\n";
    const char* fileread = "table.csv";
    const char* filewrite = "table_new.csv";

    FILE *fr = fopen( fileread, "r" );
    FILE *fw = fopen( filewrite, "w" );

    char line[BUFFER];
    char *token_for_sum;
    char *token_for_printing;
    int flag = 0;

    if (fr == NULL) {
        puts("Cannot open file.");
        exit(1);
    }
    if (fw == NULL) {
        puts("Cannot open file.");
        fclose(fr);
        exit(1);
    }

    while (fgets(line, BUFFER, fr)) {

        token_for_printing = (char *)strtok(line, delimiter_character_line);

        if (!flag) {
            fprintf(fw, "%s%s\n", token_for_printing, ",Total");
            flag = 1;
            continue;
        }

        double total = 0.0;
        char *line_pointer = strdup(line);
        token_for_sum = (char *)strtok(line_pointer, delimiter_character_sum);

        while ( token_for_sum != NULL ) {
            total += atof(token_for_sum);
            token_for_sum = (char *)strtok(NULL, delimiter_character_sum);
        }
        fprintf(fw, "%s%s%lf\n", token_for_printing, ",", total);
    }

    fclose(fr);
    fclose(fw);
}
