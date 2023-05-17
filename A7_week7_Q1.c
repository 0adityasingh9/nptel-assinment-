#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 128
#define MAX_STUDENTS 100

struct Student
{
    char name[MAX_NAME_LENGTH];
    int physics;
    int chemistry;
    int mathematics;
};

int compare_students(const void *a, const void *b)
{
    struct Student *s1 = (struct Student *)a;
    struct Student *s2 = (struct Student *)b;

    if (s1->physics != s2->physics)
    {
        return s2->physics - s1->physics; // Higher physics marks first
    }
    else if (s1->chemistry != s2->chemistry)
    {
        return s2->chemistry - s1->chemistry; // Higher chemistry marks first
    }
    else
    {
        return s2->mathematics - s1->mathematics; // Higher math marks first
    }
}

int main()
{
    int n;
    scanf("%d", &n);
    struct Student students[MAX_STUDENTS];

    // Read student data
    for (int i = 0; i < n; i++)
    {
        scanf("%s %d %d %d", students[i].name, &students[i].physics, &students[i].chemistry, &students[i].mathematics);
    }

    // Sort students
    qsort(students, n, sizeof(struct Student), compare_students);

    // Print sorted student data
    for (int i = 0; i < n; i++)
    {
        printf("%s %d %d %d\n", students[i].name, students[i].physics, students[i].chemistry, students[i].mathematics);
    }

    return 0;
}