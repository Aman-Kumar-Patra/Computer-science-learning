/*
WAP to find the grade of students when the maeks of 4 subjects are given.
per >=90 Grade A
per <80 and >=70 grade B
per <70 and >=60 grade C
per <60 and >=50 grade D
per <50 and >=40 grade E
*/
#include <stdio.h>
int main()
{
    float m1, m2, m3, m4, total, per;
    char grade;
    printf("Enter the marks of 4 subjects:\n");
    scanf("%f%f%f%f", &m1, &m2, &m3, &m4);

    total = m1 + m2 + m3 + m4;
    per = total / 4;

    if (per >= 80)
    {
        grade = 'A';
    }
    else if (per >= 70)
    {
        grade = 'B';
    }
    else if (per >= 60)
    {
        grade = 'D';
    }
    else
    {
        grade = 'E';
    }
    printf("Percentage = %.2f and grade = %c", per, grade);

    return 0;
}