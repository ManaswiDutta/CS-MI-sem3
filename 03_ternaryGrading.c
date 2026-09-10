#include<stdio.h>

int main() {
    float a = 30.0;
    char grade;

    grade = (a > 60) ? 'A': (a > 45) ? 'B': (a > 35) ? 'C': 'F';
    printf("Marks: %.2f  Grade: %c\n",a,grade);

}