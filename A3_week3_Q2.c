#include <stdio.h>

int find_odd(int k)
{
    int num, i = 1, count = 0;
    scanf("%d", &num);
    while (num != -1)
    {

        if ((num % 2 == 1) && (i <= k))
        {
            count = num;
            i++;
        }
        scanf("%d", &num);
    }
    if ((count == 0) || (i <= k))
        count = -1;
    return count;
}
int main()
{
    int k, count;
    scanf("%d", &k);
    count = find_odd(k);
    printf("%d", count);
    return 0;
}
