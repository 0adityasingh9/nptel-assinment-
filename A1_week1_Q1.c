#include <stdio.h>

int main()
{
    int n100, n10, n1, c;
    printf("number of 100 note you have:-");
    scanf("%d", &n100);
    printf("number of 10 note you have:-");
    scanf("%d", &n10);
    printf("number of 1 note you have:-");
    scanf("%d", &n1);
    printf("cost of iteam:-");
    scanf("%d", &c);
    printf("%d", ((n100 * 100) + (n10 * 10) + (n1 * 1)) >= c);
    return 0;
}
