#include <stdio.h>
#include <string.h>
int main()
{
    char *arr[10];
    char word_list[10][11];
    char word[11];
    for (int i = 0; i < 10; i++)
    {
        printf("Enter name%d : ", i);
        scanf("%10s", word);
        strcpy(word_list[i], word);
        arr[i] = word_list[i];
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%p : %s\n", arr[i], arr[i]);
    }
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 9 - i; j++)
        {
            if (strcmp(arr[j], arr[j + 1]) > 0)
            {
                char *temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted names:\n");
    for (int i = 0; i < 10; i++)
    {
        printf("%p : %s\n", arr[i], arr[i]);
    }
}