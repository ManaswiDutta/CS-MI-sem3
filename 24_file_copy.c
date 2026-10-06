#include <stdio.h>
#include <stdlib.h>

int main()
{

    FILE *from = fopen("from.txt", "r");
    if (from == NULL)
    {
        printf("file pointer return 0\n");
    }
    else
    {
        printf("file opened successfully\n");
        char *file_content = malloc(100);
        int i = 0;
        char current_char = fgetc(from);
        printf("Reading from file...\n");
        while (current_char != EOF)
        {
            file_content[i] = current_char;
            current_char = fgetc(from);
            i++;
        }
        file_content[i] = '\0'; 
        printf("Text copied from file:\n");
        printf("%s",file_content);
        printf("\n\n");
        
        FILE *to = fopen("to.txt", "w");
        fprintf(to, "%s\n", file_content);
        printf("Text copied to destination file successfully.\n");
        fclose(to);
        fclose(from);
        free(file_content); 
        }

    
}