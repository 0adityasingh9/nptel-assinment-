#include <stdio.h>

int main()
{
    float a, b;
    scanf("%f%f", &a, &b);
    do
    {
        printf("%.1f", (a + b) / 2);
        a = b;
        scanf("%f ", &b);
    } while (b != -1);

    return 0;
}
