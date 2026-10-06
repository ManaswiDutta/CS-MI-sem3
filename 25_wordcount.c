#include <stdio.h>
#include <string.h>

int main()
{
    FILE *from = fopen("from.txt", "r");
    if (from == NULL)
    {
        printf("Could not open from.txt\n");
        return 1;
    }
    else
    {
        char file_content[1000];
        char word[20];
        char temp[1000];
        int i = 0;
        int n = 0;
        int count = 0;
        int current_char = fgetc(from);

        printf("Reading from file...\n");
        while (current_char != EOF && i < 999)
        {
            file_content[i] = current_char;
            current_char = fgetc(from);
            i++;
        }

        if (current_char != EOF)
        {
            printf("File is too long\n");
            fclose(from);
            return 1;
        }

        file_content[i] = '\0';
        fclose(from);

        printf("File content read successfully:\n");
        printf("%s", file_content);
        printf("\nEnter the word you want to search: ");
        fflush(stdout);

        scanf("%19s", word);

        for (i = 0;; i++)
        {
            if (file_content[i] == ' ' || file_content[i] == '\n' ||
                file_content[i] == '\t' || file_content[i] == '\0')
            {
                if (n > 0)
                {
                    temp[n] = '\0';
                    if (strcmp(temp, word) == 0)
                    {
                        count++;
                    }
                    n = 0;
                }

                if (file_content[i] == '\0')
                {
                    break;
                }
            }
            else
            {
                temp[n] = file_content[i];
                n++;
            }
        }

        printf("The word \"%s\" appears %d time(s).\n", word, count);
    }

    return 0;
}
