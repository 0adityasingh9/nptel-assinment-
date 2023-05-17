#include <stdio.h>

int main()
{
    int num, first, second, third;

    // printf("Enter a non-negative number less than 10000000: ");
    scanf("%d", &num);

    // Calculate the components of the number
    
    first = num % 1000;
    num/=1000;
    second = num % 100;
    num/=100;
    third = num;

    // Print the components in the required order
    if (third > 0)
    {
        printf("%d\n", first);
        printf("%d\n", second);
        printf("%d\n", third);
    }
    if (second > 0)
    {
        printf("%d\n", first);
        printf("%d\n", second);
    }
    if (first > 0)
    {
        printf("%d\n", first);
    }

    return 0;
}