#include <stdio.h>

int main()
{
    int A, B, C;
    scanf("%d", &A);
    scanf("%d", &B);
    scanf("%d", &C);
    printf("%d", (A > B) & (B > C) | (C > B) & (B > A));
    /*Here we use bitwise oprators 'AND(&)', 'OR(|)'*/
    return 0;
}

