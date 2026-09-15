#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *lower(char *str)
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }
    }
    return str;
}

typedef enum
{
    bengali,
    english,
    physics,
    computer,
    chemistry
} dept;

const char *getDeptName(dept value)
{
    switch (value)
    {
    case bengali:
        return "bengali";
    case english:
        return "english";
    case computer:
        return "computer science";
    case chemistry:
        return "chemistry";
    case physics:
        return "physics";
    default:
        return "other department";
    }
}

dept parseDept(const char *str)
{
    if (strcmp(str, "bengali") == 0)
        return bengali;
    if (strcmp(str, "english") == 0)
        return english;
    if (strcmp(str, "physics") == 0)
        return physics;
    if (strcmp(str, "computer") == 0)
        return computer;
    if (strcmp(str, "chemistry") == 0)
        return chemistry;

    return -1; // invalid department
}

struct student
{
    char f_name[10];
    char l_name[10];
    int age;
    int roll;
    dept department;
};

void printStudent(struct student s)
{
    printf("Name: %s %s\t(", s.f_name, s.l_name);
    printf("Roll: %d ", s.roll);
    printf("%s) \t", getDeptName(s.department));
    printf("Age: %d\n", s.age);
}

int main(void)
{

    int n;
    printf("enter number of students: ");
    scanf("%d", &n);
    struct student *list = malloc(n * sizeof(struct student));
    for (int i = 0; i < n; i++)
    {
        printf("enter student %d details:\n", i + 1);

        char f_name[10];
        char l_name[10];
        printf("enter student first name : ");
        scanf("%9s", f_name);
        printf("enter student last name : ");
        scanf("%9s", l_name);
        int roll;
        printf("enter student roll : ");
        scanf("%d", &roll);
        int age;
        printf("enter student age : ");
        scanf("%d", &age);
        char dept_str[20];
        printf("enter your department: ");
        scanf("%19s", dept_str);

        lower(dept_str);

        dept d = parseDept(dept_str);

        if (d == -1)
        {
            printf("Invalid department\n");
            return 1;
        }

        dept department = d;

        struct student s;
        strcpy(s.f_name, f_name);
        strcpy(s.l_name, l_name);
        s.age = age;
        s.roll = roll;
        s.department = department;

        list[i] = s;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i - 1; j++)
        {
            if (list[j].age > list[j + 1].age)
            {
                struct student temp = list[j];
                list[j] = list[j + 1];
                list[j + 1] = temp;
            }
        }
    }
    printf("\n\n***************Sorted list of students by age************\n");
    for (int i = 0; i < n; i++)
    {
        printStudent(list[i]);
    }

    free(list);
    return 0;
}
